/*
 * Hero.h
 *
 *  Created on: 2016 dec. 8
 *      Author: Feri
 */

#ifndef HERO_H_
#define HERO_H_

#include "game_engine.h"
#include "Map.h"
#include "Characters.h"

class Hero : public Characters {
private:
  int hero_image_status;
  string hero_image[4] = {"hero-up.bmp","hero-right.bmp","hero-down.bmp","hero-left.bmp"};
public:
  Hero();
  int get_hero_image_status();
  int set_hero_image_status(int);
  int hero_move(GameContext& context, Map map);
  string get_hero_image(int);
};

#endif /* HERO_H_ */
