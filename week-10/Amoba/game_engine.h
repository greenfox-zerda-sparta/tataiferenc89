#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "SDL2/SDL.h"
#include "SDL_Net.h"

#include <map>
#include <string>
#include <vector>
#include "Context.h"
#include "GameClass.h"
#include "Gamelogic.h"
#include "ClientSocket.h"

class GameEngine {
private:
  Context* context;
  GameClass* game;
  Game_logic* logic;
  ClientSocket* cs;
  int x = 0;
  int y = 0;
  int x2 = 0;
  int y2 = 0;
  char* message;
public:
  GameEngine(GameClass* g, unsigned int screen_width, unsigned int screen_height) {
    context = new Context(screen_width, screen_height);
    logic = new Game_logic();
    game = g;
    game->init(*context);
    cs = new ClientSocket("127.0.0.1",1234,512);
  }
  ~GameEngine() {
    delete context;
  }
  void run() {
    SDLNet_Init();
    cs->connectToServer();
    string receivedMessage = "";
    SDL_Event event;
    int gameover = 0;
    int counter = 0;
    while (!gameover) {
      context->resert_click();
      if (SDL_PollEvent(&event)) {
        if(event.type == SDL_QUIT) {
            gameover = 1;
        }
        else if(event.type == SDL_MOUSEBUTTONDOWN){
          context->mouse_down();
          SDL_GetMouseState(&x,&y);
          cs->getUserInput(x/30,y/30);
          message = cs->checkForIncomingMessages();
          x2 = (int)message[0];
          y2 = (int)message[1];
          cout << x2 << " " << y2 << endl;
          context->set_mouse_coordinates(x,y);
          if(context->was_mouse_clicked() && counter % 2 == 0 && logic->get_map_vector()[x/30][y/30] == 0) {
            logic->get_map_vector()[x/30][y/30] = 1;
            counter++;
            game->render(*context);
          }
          else if(context->was_mouse_clicked() && counter % 2 != 0 && logic->get_map_vector()[x/30][y/30] == 0) {
            logic->get_map_vector()[x/30][y/30] = 2;
            counter++;
            game->render(*context);
          }
          if(logic->is_someone_won(x/30,y/30) && logic->get_map_vector()[x/30][y/30] != 0) {
            game->render(*context);
            SDL_Delay(1500);
            logic->winner_is(*context,counter-1);
            SDL_Delay(3000);
            gameover = 1;
            break;
          }
        }
      }
      game->render(*context);
   }
  }
};
#endif
