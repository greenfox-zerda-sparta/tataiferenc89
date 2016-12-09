/*
 * Characters.cpp
 *
 *  Created on: 2016 dec. 8
 *      Author: Feri
 */

#include "Characters.h"

Characters::Characters() {
  HP = 0;
  DP = 0;
  SP = 0;
  level = 1;
  character_coordinate_x = 0;
  character_coordinate_y = 0;
}

int Characters::get_character_coordinate_x() {
  return this->character_coordinate_x;
}

int Characters::get_character_coordinate_y(){
  return this->character_coordinate_y;
}

bool Characters::is_floor(Map map,int i,int j){
  return map.get_map_vector()[j][i] == '1';
}

void Characters::random_coordinates() {
  this->character_coordinate_x = rand()%9+1;
  this->character_coordinate_y = rand()%9+1;
}
