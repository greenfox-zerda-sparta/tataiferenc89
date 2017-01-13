/*
 * Amoba.cpp
 *
 *  Created on: 2016 dec. 23
 *      Author: Feri
 */

#include "Amoba.h"

Amoba::Amoba() {
  this->g = new Game_logic();
}

void Amoba::init(Context& context) {
  context.load_file("empty.bmp");
  context.load_file("x.bmp");
  context.load_file("o.bmp");
  context.load_file("x_won.bmp");
  context.load_file("y_won.bmp");
}
void Amoba::render(Context& context) {
  g->draw_map(context);
  context.render();
}

