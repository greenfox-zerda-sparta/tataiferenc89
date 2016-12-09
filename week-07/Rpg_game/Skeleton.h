/*
 * Skeleton.h
 *
 *  Created on: 2016 dec. 8
 *      Author: Feri
 */

#ifndef SKELETON_H_
#define SKELETON_H_

#include "game_engine.h"
#include "Map.h"
#include "Characters.h"

class Skeleton : public Characters {
private:
  std::string skeleton_image = "skeleton.bmp";
  int skeleton_counter;
public:
  Skeleton();
  void draw_skeleton(GameContext& context, Map map);
};

#endif /* SKELETON_H_ */
