/*
 * Boss.h
 *
 *  Created on: 2016 dec. 8
 *      Author: Feri
 */

#ifndef BOSS_H_
#define BOSS_H_

#include <cstdlib>

#include "game_engine.h"
#include "Map.h"
#include "Characters.h"

class Boss : public Characters{
private:
  std::string boss_image = "boss.bmp";
public:
  Boss();

  void draw_boss(GameContext& context, Map map);
};

#endif /* BOSS_H_ */
