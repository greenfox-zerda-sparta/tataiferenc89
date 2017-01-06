/*
 * Context.cpp
 *
 *  Created on: 2017 jan. 5
 *      Author: Feri
 */

#include "Context.h"

void Context::set_mouse_coordinates(int x,int y) {
  mouse_x = x;
  mouse_y = y;
}
int Context::get_mouse_coordinate_x() {
  return mouse_x;
}
int Context::get_mouse_coordinate_y() {
  return mouse_y;
}
Context::Context(unsigned int screen_width, unsigned int screen_height) {
  SDL_Init(SDL_INIT_VIDEO);
  screen = SDL_CreateWindow("My Game Window",
          SDL_WINDOWPOS_UNDEFINED,
          SDL_WINDOWPOS_UNDEFINED,
          screen_width, screen_height,
          0);
  renderer = SDL_CreateRenderer(screen, -1, 0);
}
Context::~Context() {
  for (std::map<std::string, SDL_Texture*>::iterator it = sprites.begin(); it != sprites.end(); ++it) {
    SDL_DestroyTexture(it->second);
  }
  SDL_Quit();
}
void Context::load_file(std::string name) {
  SDL_Surface* result = SDL_LoadBMP(name.c_str());
  SDL_SetColorKey(result, SDL_TRUE, SDL_MapRGB(SDL_AllocFormat(SDL_GetWindowPixelFormat(screen)), 0xFF, 0, 0xFF));
  sprites[name] = SDL_CreateTextureFromSurface(renderer, result);
  SDL_FreeSurface(result);
}
void Context::draw_sprite(std::string name, int x, int y, int w, int h) {
  SDL_Rect temp;
  temp.x = x;
  temp.y = y;
  temp.w = w;
  temp.h = h;
  SDL_RenderCopy(renderer, sprites[name], NULL, &temp);
}
void Context::render() {
  SDL_RenderPresent(renderer);
}
void Context::mouse_down() {
  click = true;
}
void Context::resert_click(){
  click = false;
}
bool Context::was_mouse_clicked() {
  return click;
}
