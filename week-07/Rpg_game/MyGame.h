/*
 * MyGame.h
 *
 *  Created on: 2016 dec. 7
 *      Author: Feri
 */

#ifndef MYGAME_H_
#define MYGAME_H_

#include "game_engine.h"
#include "Hero.h"
#include "Skeleton.h"
#include "Boss.h"
#include "Map.h"

using namespace std;

class MyGame : public Game {
private:
  Map map;
  Hero hero_1;
  Boss boss_1;
  Skeleton skeleton_1,skeleton_2,skeleton_3;
public:
  MyGame();
  void init(GameContext& context);
  void render(GameContext& context);
  virtual ~MyGame();
};

#endif /* MYGAME_H_ */
