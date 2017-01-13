#include "ClientSocket.h"

const std::string  ClientSocket::SERVER_NOT_FULL           = "OK";        // Server's response when there are free spots a client can join
const std::string  ClientSocket::SERVER_FULL               = "FULL";      // Server's response when there are no free spots, so a client cannot join
const std::string  ClientSocket::QUIT_SIGNAL               = "/quit";     // What you type to shutdown the client
const unsigned int ClientSocket::CONNECTION_TIMEOUT_PERIOD = 5000;        // 5 second connection timeout
const unsigned int ClientSocket::SOCKET_SET_POLL_PERIOD    = 10;          // 10ms, so poll 100 times/second

ClientSocket::ClientSocket(string theServerAddress, unsigned int theServerPort, unsigned int theBufferSize) {
  debug          = true;
  shutdownClient = false;
  serverHostname = theServerAddress;
  serverPort = theServerPort;
  bufferSize = theBufferSize;
  inputLength = 0;
  pBuffer = new char[bufferSize];
  socketSet = SDLNet_AllocSocketSet(2);
}

ClientSocket::~ClientSocket() {
  SDLNet_TCP_Close(serverSocket);
  SDLNet_TCP_Close(clientSocket);
  SDLNet_FreeSocketSet(socketSet);
  delete pBuffer;
}

void ClientSocket::connectToServer() {
int hostResolved = SDLNet_ResolveHost(&serverIP, serverHostname.c_str(), serverPort);
  Uint8 * dotQuad = (Uint8*)&serverIP.host;
  dotQuadString  = toString( (unsigned short)dotQuad[0] );
  dotQuadString += ".";
  dotQuadString += toString( (unsigned short)dotQuad[1] );
  dotQuadString += ".";
  dotQuadString += toString( (unsigned short)dotQuad[2] );
  dotQuadString += ".";
  dotQuadString += toString( (unsigned short)dotQuad[3] );
  if (debug) {
    cout << "Successfully resolved server to IP: " << dotQuadString;
    cout << ", will use port " << SDLNet_Read16(&serverIP.port) << endl;
    const char *pHostname;
    if (!(pHostname = SDLNet_ResolveIP(&serverIP))) {
      cout << "Failed to resolve the server IP to hostname: " << SDLNet_GetError() << endl;
      cout << "Attempting to continue as we have a (technically) valid IP address..." << endl;
    }
    else {
      serverHostname = toString(pHostname);
      cout << "Successfully resolved IP to hostname: " << serverHostname << endl;
    }
  }

  clientSocket = SDLNet_TCP_Open(&serverIP);
  if (debug) { cout << "Connection okay, about to read connection status from the server..." << endl; }
  SDLNet_TCP_AddSocket(socketSet, clientSocket);
  int activeSockets = SDLNet_CheckSockets(socketSet, ClientSocket::CONNECTION_TIMEOUT_PERIOD);
  if (debug) {
    cout << "There are " << activeSockets << " socket(s) with data on them at the moment." << endl;
  }
  int gotServerResponse = SDLNet_SocketReady(clientSocket);
  if (gotServerResponse != 0) {
    int serverResponseByteCount = SDLNet_TCP_Recv(clientSocket, pBuffer, bufferSize);
    if (debug) {
      cout << "Message from server: " << pBuffer << "(" << serverResponseByteCount << " bytes)" << endl;
    }
    string bufferContents = pBuffer;
    if ( pBuffer == ClientSocket::SERVER_NOT_FULL ) {
      if (debug) { cout << "Joining server now..." << endl; }
    }
  }
}

char* ClientSocket::checkForIncomingMessages() {
  char* receivedMessage;
  int activeSockets = SDLNet_CheckSockets(socketSet, ClientSocket::SOCKET_SET_POLL_PERIOD);
  if (activeSockets != 0) {
    int gotMessage = SDLNet_SocketReady(clientSocket);
    if (gotMessage != 0) {
      int serverResponseByteCount = SDLNet_TCP_Recv(clientSocket, pBuffer, bufferSize);
      if (serverResponseByteCount != 0) {
        receivedMessage = pBuffer;
        cout << "Got coordinates x: "<< (int)pBuffer[0] << ", y:" << (int)pBuffer[1] << endl;
      }
    }
  }
return receivedMessage;
}

void ClientSocket::getUserInput(int x_coordinate,int y_coordinate) {
  char message[2];
  message[0] = (char)x_coordinate;
  message[1] = (char)y_coordinate;
  pBuffer = message;
  if (message != 0) {
    inputLength = strlen(pBuffer) + 1;
    if (userInput != ClientSocket::QUIT_SIGNAL) {
      if (SDLNet_TCP_Send(clientSocket, (void *)pBuffer, inputLength) < inputLength) {
        string msg  = "Error: Failed to send message: ";
               msg += SDLNet_GetError();
      }
      else {
        cout << endl;
        cout <<"Sent coordinates x: "<< x_coordinate << ", y:" << y_coordinate << endl;
        fflush(stdout);
      }
    }
    else {
      shutdownClient = true;
    }
  }
}

