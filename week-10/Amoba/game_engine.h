#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "SDL2/SDL.h"

#include <map>
#include <string>
#include <vector>
#include "Context.h"
#include "Gamelogic.h"

class Game {
public:
  virtual void init(Context& context) = 0;
  virtual void render(Context& context) = 0;
  virtual ~Game(){}
};

class GameEngine {
private:
  Context* context;
  Game* game;
  Game_logic* logic;
  int x = 0;
  int y = 0;
public:
  GameEngine(Game* g, unsigned int screen_width, unsigned int screen_height) {
    context = new Context(screen_width, screen_height);
    logic = new Game_logic();
    game = g;
    game->init(*context);
  }
  ~GameEngine() {
    delete context;
  }
  void run() {
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
          context->set_mouse_coordinates(x,y);
          std::cout << x/30 << " " << y/30 << " ";
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
