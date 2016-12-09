/*
 * Map.cpp
 *
 *  Created on: 2016 dec. 8
 *      Author: Feri
 */

#include "Map.h"

Map::Map(){
  map_vector = vector<vector<char> > (10,vector<char> (10));
  fill_vector_from_file(map_vector);
}

void Map::fill_vector_from_file(vector<vector<char>>& v) {
  ifstream map_file;
  map_file.open("good_map.txt");
  char temp;
  if (map_file.is_open()){
    for(int i = 0; i < 10; i++) {
      for(int j = 0; j < 10; j++) {
        map_file >> temp;
          v[j][i] = temp;
      }
    }
  }
  map_file.close();
}
void Map::draw_map(GameContext& context) {
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      if (map_vector[i][j] == '1'){
        context.draw_sprite("floor.bmp", i*70,j*70);
      }
      else {
        context.draw_sprite("wall.bmp", i*70,j*70);
      }
    }
  }
}
vector<vector<char>> Map::get_map_vector() {
  return map_vector;
}
