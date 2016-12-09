/*
 * Boss.cpp
 *
 *  Created on: 2016 dec. 8
 *      Author: Feri
 */

#include "Boss.h"

Boss::Boss(){
  random_coordinates();
}

void Boss::draw_boss(GameContext& context, Map map) {
  if(is_floor(map,character_coordinate_y,character_coordinate_x)){
    context.draw_sprite(boss_image, character_coordinate_x * 70, character_coordinate_y * 70);
  }
  else {
    random_coordinates();
  }
}
