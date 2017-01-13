#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "SDL2/SDL.h"
#include "SDL_Net.h"

#include <map>
#include <string>
#include <vector>
#include "Context.h"
#include "Amoba.h"
#include "ClientSocket.h"

class GameEngine {
private:
  Context* context;
  Amoba* game;
  ClientSocket* cs;
  char* message;
  int gameover = 0;
  int counter = 0;
  int round = 0;
  int x = 0;
  int y = 0;
public:
  GameEngine(unsigned int screen_width, unsigned int screen_height) {
    context = new Context(screen_width, screen_height);
    game = new Amoba;;
    //game->g->draw_matrix();
    game->init(*context);
    cs = new ClientSocket("127.0.0.1",1234,512);
    message = new char();
  }
  bool is_valid_coordinate(){
    return (int)message[0] >= 0 && (int)message[0] < 20 /*&& (int)message[1] >= 0 && (int)message[1] < 20*/;
  }
  ~GameEngine() {
    delete context;
  }
  void run() {
    SDLNet_Init();
    cs->connectToServer();
    SDL_Event event;
    bool message_sent = false;
    while (!gameover) {
      message = cs->checkForIncomingMessages();
      if(is_valid_coordinate()) {
        x = (int)message[0];
        y = (int)message[1];
        if(counter % 2 == 0 && game->g->get_map_vector()[x][y] == 0) {
          game->g->set_map_coordinates_to_X(x,y);
          counter++;
          game->render(*context);
        }
        else if(counter % 2 != 0 && game->g->get_map_vector()[x][y] == 0) {
          game->g->set_map_coordinates_to_Y(x,y);
          counter++;
          game->render(*context);
        }
      }
      if (SDL_PollEvent(&event)) {
        if(event.type == SDL_QUIT) {
          gameover = 1;
        }
        else if(event.type == SDL_MOUSEBUTTONDOWN){
          context->mouse_down();
          SDL_GetMouseState(&x,&y);
          x /= 30; y /= 30;
          //if(counter % 2 == 0){
          cs->getUserInput(x,y);
          //}
        }
      }
      else if(game->g->is_someone_won(x,y) && game->g->get_map_vector()[x][y] != 0) {
        game->render(*context);
        SDL_Delay(1500);
        game->g->winner_is(*context,counter-1);
        SDL_Delay(3000);
        gameover = 1;
        break;
      }
      game->render(*context);
    }
  }
};
#endif
