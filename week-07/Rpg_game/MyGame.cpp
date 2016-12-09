/*
 * MyGame.cpp
 *
 *  Created on: 2016 dec. 7
 *      Author: Feri
 */

#include "MyGame.h"

MyGame::MyGame() {
}
void MyGame::init(GameContext& context) {
  context.load_file("floor.bmp");
  context.load_file("wall.bmp");
  context.load_file("hero-down.bmp");
  context.load_file("hero-up.bmp");
  context.load_file("hero-left.bmp");
  context.load_file("hero-right.bmp");
  context.load_file("boss.bmp");
  context.load_file("skeleton.bmp");
}

void MyGame::render(GameContext& context) {
  map.draw_map(context);
  boss_1.draw_boss(context,map);
  skeleton_1.draw_skeleton(context,map);
  skeleton_2.draw_skeleton(context,map);
  skeleton_3.draw_skeleton(context,map);
  hero_1.hero_move(context,map);
  context.draw_sprite(hero_1.get_hero_image(hero_1.get_hero_image_status()),
      hero_1.get_character_coordinate_x(),
      hero_1.get_character_coordinate_y());
  context.render();
}
MyGame::~MyGame(){

}
