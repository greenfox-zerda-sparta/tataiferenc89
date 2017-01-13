#ifndef SOCKET_H
#define SOCKET_H

#include <iostream>
#include <string>
#include <sstream>
#include <conio.h>
#include "SDL_net.h"

using std::string;
using std::cout;
using std::cerr;
using std::endl;

class ClientSocket
{
private:
  bool debug;
  unsigned int serverPort;
  unsigned int bufferSize;
  string serverHostname;
  IPaddress serverIP;
  string dotQuadString;
  TCPsocket serverSocket;
  TCPsocket clientSocket;
  char *pBuffer;
  string userInput;
  int inputLength;
  SDLNet_SocketSet socketSet;
  bool shutdownClient;

public:
  static const string       SERVER_NOT_FULL;
  static const string       SERVER_FULL;
  static const string       SHUTDOWN_SIGNAL;
  static const string       QUIT_SIGNAL;
  static const unsigned int CONNECTION_TIMEOUT_PERIOD;
  static const unsigned int SOCKET_SET_POLL_PERIOD;
  ClientSocket(string theServerAddress, unsigned int theServerPort, unsigned int theBufferSize);
  ~ClientSocket();
  void connectToServer();
  char* checkForIncomingMessages();
  void getUserInput(int,int);
};
template<class T>
std::string toString(const T& t)
{
  std::ostringstream stream;
  stream << t;
  return stream.str();
}
#endif
