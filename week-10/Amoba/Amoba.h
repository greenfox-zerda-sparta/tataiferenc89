/*
 * Amoba.h
 *
 *  Created on: 2016 dec. 23
 *      Author: Feri
 */

#ifndef AMOBA_H_
#define AMOBA_H_

#include "game_engine.h"
#include "Gamelogic.h"


class Amoba :public Game {
  Game_logic g;
public:
  void init(Context& context);
  void render(Context& context);
  void test_coordinate();
  virtual ~Amoba(){}
};

#endif /* AMOBA_H_ */
