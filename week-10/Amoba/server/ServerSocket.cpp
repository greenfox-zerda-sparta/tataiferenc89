#include "ServerSocket.h"

// Static constants for the ServerSocket class
const string ServerSocket::SERVER_NOT_FULL = "OK";
const string ServerSocket::SERVER_FULL     = "FULL";
const string ServerSocket::SHUTDOWN_SIGNAL = "/shutdown";

ServerSocket::ServerSocket(unsigned int thePort, unsigned int theBufferSize, unsigned int theMaxSockets) {
	debug          = true;
	shutdownServer = false;
	port       = thePort;
	bufferSize = theBufferSize;
	maxSockets = theMaxSockets;
	maxClients = theMaxSockets - 1;
	pClientSocket = new TCPsocket[maxClients];
	pSocketIsFree = new bool[maxClients];
	pBuffer = new char[bufferSize];
	clientCount    = 0;
	socketSet = SDLNet_AllocSocketSet(maxSockets);
  if (debug) {
    cout << "There are total " << maxSockets << " sockets, and " << maxClients << " of it is/are free." <<  endl;
  }
  for (unsigned int loop = 0; loop < maxClients; loop++) {
    pClientSocket[loop] = NULL;
    pSocketIsFree[loop] = true;
  }
  int hostResolved = SDLNet_ResolveHost(&serverIP, NULL, port);
  if (debug) {
    Uint8 * dotQuad = (Uint8*)&serverIP.host;
    dotQuadString  = toString( (unsigned short)dotQuad[0] );
    dotQuadString += ".";
    dotQuadString += toString( (unsigned short)dotQuad[1] );
    dotQuadString += ".";
    dotQuadString += toString( (unsigned short)dotQuad[2] );
    dotQuadString += ".";
    dotQuadString += toString( (unsigned short)dotQuad[3] );
    cout << "Server host IP: " << dotQuadString << endl;
    cout << "Using port: " << SDLNet_Read16(&serverIP.port) << endl;
  }
	serverSocket = SDLNet_TCP_Open(&serverIP);
	if (debug) { cout << "Server socket created." << endl; }
	SDLNet_TCP_AddSocket(socketSet, serverSocket);
	if (debug) {
		cout << "Awaiting for players to join..." << endl;
	}
}
ServerSocket::~ServerSocket() {
  for (unsigned int loop = 0; loop < maxClients; loop++) {
    if (pSocketIsFree[loop] == false) {
      SDLNet_TCP_Close(pClientSocket[loop]);
      pSocketIsFree[loop] = true;
    }
  }
  SDLNet_TCP_Close(serverSocket);
  SDLNet_FreeSocketSet(socketSet);
  delete pClientSocket;
  delete pSocketIsFree;
  delete pBuffer;
}

void ServerSocket::checkForConnections() {
  int numActiveSockets = SDLNet_CheckSockets(socketSet, 1);
  if (numActiveSockets != 0) {
    if (debug) {
      cout << "There are currently " << numActiveSockets << " socket(s) with data to be processed." << endl;
    }
  }
  int serverSocketActivity = SDLNet_SocketReady(serverSocket);
  if (serverSocketActivity != 0) {
    if (clientCount < maxClients) {
      int freeSpot = -99;
      for (unsigned int loop = 0; loop < maxClients; loop++) {
        if (pSocketIsFree[loop] == true) {
          if (debug) {
            cout << "Found a free spot at element: " << loop << endl;
          }
          pSocketIsFree[loop] = false;
          freeSpot = loop;
          break;
        }
      }
      pClientSocket[freeSpot] = SDLNet_TCP_Accept(serverSocket);
      SDLNet_TCP_AddSocket(socketSet, pClientSocket[freeSpot]);

      clientCount++;

      strcpy( pBuffer, SERVER_NOT_FULL.c_str() );
      int msgLength = strlen(pBuffer) + 1;
      SDLNet_TCP_Send(pClientSocket[freeSpot], (void *)pBuffer, msgLength);

      if (debug) { cout << "Player connected. There are now " << clientCount << " player(s) connected." << endl; }
    }
    else {
      if (debug) { cout << "Max player count reached - rejecting player connection" << endl; }
      TCPsocket tempSock = SDLNet_TCP_Accept(serverSocket);
      strcpy( pBuffer, SERVER_FULL.c_str() );
      int msgLength = strlen(pBuffer) + 1;
      SDLNet_TCP_Send(tempSock, (void *)pBuffer, msgLength);
      SDLNet_TCP_Close(tempSock);
    }
  }
}

void ServerSocket::dealWithActivity(unsigned int clientNumber) {
  int coordx = (int)pBuffer[0];
  int coordy = (int)pBuffer[1];
  if (debug) {
    cout << "Received coordinate x: " << coordx << " ,coordinate y: " << coordy << " from player number: " << clientNumber << endl;
  }
  for (unsigned int loop = 0; loop < maxClients; loop++) {
    unsigned int msgLength = strlen(pBuffer) + 1;
    if ( (msgLength > 1) && (pSocketIsFree[loop] == false) ) {
      if (debug) {
        cout << "Coordinate x: " << coordx << " , y: " << coordy << " (" << msgLength << " bytes) to client " << loop << endl;
      }
      SDLNet_TCP_Send(pClientSocket[loop], (void *)pBuffer, msgLength);
    }
  }
}

int ServerSocket::checkForActivity() {
  for (unsigned int clientNumber = 0; clientNumber < maxClients; clientNumber++) {
    int clientSocketActivity = SDLNet_SocketReady(pClientSocket[clientNumber]);
    if (clientSocketActivity != 0) {
      int receivedByteCount = SDLNet_TCP_Recv(pClientSocket[clientNumber], pBuffer, bufferSize);
      if (receivedByteCount <= 0) {
        if (debug) { cout << "Player " << clientNumber << " disconnected." << endl; }
        SDLNet_TCP_DelSocket(socketSet, pClientSocket[clientNumber]);
        SDLNet_TCP_Close(pClientSocket[clientNumber]);
        pClientSocket[clientNumber] = NULL;
        pSocketIsFree[clientNumber] = true;
        clientCount--;
        if (debug) { cout << "Server is now connected to: " << clientCount << " player(s)." << endl; }
      }
      else {
        return clientNumber;
      }
    }
  }
return -1;
}
bool ServerSocket::getShutdownStatus() {
  return shutdownServer;
}
