/*
 * GameClass.h
 *
 *  Created on: 2017 jan. 6
 *      Author: Feri
 */

#ifndef GAMECLASS_H_
#define GAMECLASS_H_

#include "Context.h"

class GameClass {
public:
  virtual void init(Context& context) = 0;
  virtual void render(Context& context) = 0;
  virtual ~GameClass(){}
};

#endif /* GAMECLASS_H_ */
