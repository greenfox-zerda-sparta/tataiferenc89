/*
 * Gamelogic.h
 *
 *  Created on: 2016 dec. 23
 *      Author: Feri
 */

#ifndef GAMELOGIC_H_
#define GAMELOGIC_H_

#include <vector>
#include <iostream>
#include "Context.h"

class Game_logic {
private:
  std::vector< std::vector<int> > map;
  int counter = 0;
public:
  Game_logic();
  void draw_map(Context&);
  void play(Context&);
  void winner_is(Context&,int);
  std::vector< std::vector<int> >& get_map_vector();
  void set_map_coordinates_to_empty(int,int);
  void set_map_coordinates_to_X(int,int);
  void set_map_coordinates_to_Y(int,int);
  bool test_in_a_row(int,int);
  bool is_five_in_a_row(int,int);
  bool is_five_in_a_column(int,int);
  bool is_five_in_diagonal_up(int,int);
  bool is_five_in_digaonal_down(int,int);
  bool is_someone_won(int,int);
  void draw_matrix();

};

#endif /* GAMELOGIC_H_ */
