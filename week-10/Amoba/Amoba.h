/*
 * Amoba.h
 *
 *  Created on: 2016 dec. 23
 *      Author: Feri
 */

#ifndef AMOBA_H_
#define AMOBA_H_

#include "GameClass.h"
#include "Gamelogic.h"
#include "game_engine.h"


class Amoba :public GameClass {
  Game_logic g;
public:
  void init(Context& context);
  void render(Context& context);
  virtual ~Amoba(){}
};

#endif /* AMOBA_H_ */
