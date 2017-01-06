/*
 * Context.h
 *
 *  Created on: 2017 jan. 5
 *      Author: Feri
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_

#include "SDL2/SDL.h"
#include <map>
#include <string>
#include <vector>

class Context {
private:
  SDL_Window* screen;
  SDL_Renderer* renderer;
  std::map<std::string, SDL_Texture*> sprites;
  int mouse_x = 0;
  int mouse_y = 0;
  bool click = false;
public:
  Context(unsigned int screen_width, unsigned int screen_height);
  ~Context();
  void set_mouse_coordinates(int,int);
  int get_mouse_coordinate_x();
  int get_mouse_coordinate_y();
  void load_file(std::string name);
  void draw_sprite(std::string,int,int,int,int);
  void render();
  void mouse_down();
  void resert_click();
  bool was_mouse_clicked() ;
};


#endif /* CONTEXT_H_ */
