/*
 * Skeleton.cpp
 *
 *  Created on: 2016 dec. 8
 *      Author: Feri
 */

#include "Skeleton.h"

Skeleton::Skeleton(){
  random_coordinates();
  skeleton_counter = 3;
}

void Skeleton::draw_skeleton(GameContext& context, Map map){
  for(int i = 0; i < skeleton_counter ;i++ ) {
    if(is_floor(map,character_coordinate_y,character_coordinate_x)){
      context.draw_sprite(skeleton_image, character_coordinate_x * 70, character_coordinate_y * 70);
    }
    else {
      random_coordinates();
    }
  }
 // random_coordinates();
}
