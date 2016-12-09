/*
 * Hero.cpp
 *
 *  Created on: 2016 dec. 8
 *      Author: Feri
 */

#include "Hero.h"

Hero::Hero() {
this->character_coordinate_x = 0;
this->character_coordinate_y = 0;
this->hero_image_status = 2;
}
int Hero::get_hero_image_status() {
  return this->hero_image_status;
}
int Hero::set_hero_image_status(int image_status){
  this->hero_image_status = image_status;
  return get_hero_image_status();
}
string Hero::get_hero_image(int hero_image_status){
  return this->hero_image[hero_image_status];
}
int Hero::hero_move(GameContext& context, Map map){
  if (context.was_key_pressed(0)) {
    if(character_coordinate_y > 0 ){
      if(is_floor(map,(character_coordinate_y-70)/70,character_coordinate_x/70)){
        character_coordinate_y -= 70;
      }
    }
    hero_image_status = 0;
  }
  else if (context.was_key_pressed(1)) {
    if(character_coordinate_x < 630){
      if(is_floor(map,character_coordinate_y/70,(character_coordinate_x+70)/70)){
        character_coordinate_x += 70;
      }
    }
    hero_image_status = 1;
  }
  else if (context.was_key_pressed(2)) {
    if(character_coordinate_y < 630){
      if(is_floor(map,(character_coordinate_y+70)/70,character_coordinate_x/70)){
        character_coordinate_y += 70;
      }
    }
    hero_image_status = 2;
  }
  else if (context.was_key_pressed(3)) {
    if(character_coordinate_x > 0){
      if(is_floor(map,character_coordinate_y/70,(character_coordinate_x-70)/70)){
        character_coordinate_x -= 70;
      }
    }
    hero_image_status = 3;
  }
  return hero_image_status;
}
