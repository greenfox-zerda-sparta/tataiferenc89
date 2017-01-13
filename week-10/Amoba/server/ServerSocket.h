#ifndef SOCKET_H
#define SOCKET_H

#include <iostream>
#include <string>
#include <sstream>
#include "SDL_net.h"


using std::string;
using std::cout;
using std::cerr;
using std::endl;

class ServerSocket
{
private:
  bool debug;
  bool shutdownServer;
  bool *pSocketIsFree;
  char *pBuffer;
  unsigned int port;
  unsigned int bufferSize;
  unsigned int maxSockets;
  unsigned int maxClients;
  unsigned int clientCount;
  IPaddress serverIP;
  TCPsocket serverSocket;
  string    dotQuadString;
  TCPsocket *pClientSocket;
  SDLNet_SocketSet socketSet;

public:
  static const string SERVER_NOT_FULL;
  static const string SERVER_FULL;
  static const string SHUTDOWN_SIGNAL;

  ServerSocket(unsigned int port, unsigned int bufferSize, unsigned int maxSockets);
  ~ServerSocket();
  void checkForConnections();
  int checkForActivity();
  void dealWithActivity(unsigned int clientNumber);
  bool getShutdownStatus();
};

template<class T>
std::string toString(const T& t)
{
	std::ostringstream stream;
	stream << t;
	return stream.str();
}

#endif
