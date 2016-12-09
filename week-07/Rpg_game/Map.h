/*
 * Map.h
 *
 *  Created on: 2016 dec. 8
 *      Author: Feri
 */

#ifndef MAP_H_
#define MAP_H_

#include <fstream>
#include <vector>

#include "game_engine.h"

using namespace std;

class Map {
private:
  vector<vector<char>> map_vector;
public:
  Map();
  void fill_vector_from_file(vector<vector<char>>& v);
  vector<vector<char>> get_map_vector();
  void draw_map(GameContext& context);
};

#endif /* MAP_H_ */
