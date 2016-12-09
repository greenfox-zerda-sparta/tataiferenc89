/*
 * Characters.h
 *
 *  Created on: 2016 dec. 8
 *      Author: Feri
 */

#ifndef CHARACTERS_H_
#define CHARACTERS_H_

#include <vector>

#include "game_engine.h"
#include "Map.h"

using namespace std;
class Characters {
private:
protected:
  int HP;
  int DP;
  int SP;
  int level;
  int character_coordinate_x;
  int character_coordinate_y;
public:
  Characters();
  int get_character_coordinate_x();
  int get_character_coordinate_y();
  void random_coordinates();
  bool is_floor(Map map,int,int);
};

#endif /* CHARACTERS_H_ */
