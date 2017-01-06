/*
 * Amoba.cpp
 *
 *  Created on: 2016 dec. 23
 *      Author: Feri
 */

#include "Amoba.h"

void Amoba::init(Context& context) {
  context.load_file("empty.bmp");
  context.load_file("x.bmp");
  context.load_file("o.bmp");
  context.load_file("x_won.bmp");
  context.load_file("y_won.bmp");
}
void Amoba::render(Context& context) {
  g.draw_map(context);
  g.play(context);
  context.render();
}
void Amoba::test_coordinate() {
  std::vector<std::vector<int>> map = g.get_map_vector();
  for(int i = 0; i < map.size(); i++) {
    for(int j = 0; j < map.size(); j++) {
      std::cout << map[i][j];
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}
