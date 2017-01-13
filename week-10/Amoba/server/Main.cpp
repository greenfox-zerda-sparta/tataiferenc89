// Re-written simple SDL_net socket server example | Nov 2011 | r3dux
// Library dependencies: libSDL, libSDL_net

// IMPORTANT: This project will only build successfully in Debug mode on Windows!

#include <iostream>
#include <string>
#include "SDL_net.h"
#include "ServerSocket.h"

int main(int argc, char *argv[]) {
if (SDLNet_Init() == -1) {
  std::cerr << "Failed to intialise SDL_net: " << SDLNet_GetError() << std::endl;
  exit(-1);
}
ServerSocket *serverssocket;
serverssocket = new ServerSocket(1234, 512, 3);
int activeClient = -1;
do
{
  serverssocket->checkForConnections();
  do{
    activeClient = serverssocket->checkForActivity();
    if (activeClient != -1){
      serverssocket->dealWithActivity(activeClient);
    }
  }
  while (activeClient != -1);
}
while (serverssocket->getShutdownStatus() == false);
SDLNet_Quit();
return 0;
}
