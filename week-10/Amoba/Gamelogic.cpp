/*
 * Gamelogic.cpp
 *
 *  Created on: 2016 dec. 23
 *      Author: Feri
 */

#include "Gamelogic.h"

Game_logic::Game_logic() {
  map = std::vector<std::vector<int> > (19,std::vector<int> (19,0));
}

void Game_logic::draw_map(Context& context) {
  for(unsigned int i = 0; i < 19; i++) {
    for(unsigned int j = 0; j < 19; j++) {
      if(map[i][j] == 0) {
        context.draw_sprite("empty.bmp",i*30,j*30,30,30);
      }
      else if(map[i][j] == 1) {
        context.draw_sprite("x.bmp", i*30, j*30, 30, 30);
      }
      else if(map[i][j] == 2) {
        context.draw_sprite("o.bmp", i*30, j*30, 30, 30);
      }
    }
  }
}

std::vector< std::vector<int> >& Game_logic::get_map_vector() {
  return map;
}

void Game_logic::play(Context& context) {
  if(counter % 2 == 0 && map[context.get_mouse_coordinate_x()][context.get_mouse_coordinate_y()] == 0) {
    set_map_coordinates_to_X(context.get_mouse_coordinate_x(),context.get_mouse_coordinate_y());
    counter++;
  }
  else if(counter % 2 != 0 && map[context.get_mouse_coordinate_x()][context.get_mouse_coordinate_y()] == 0) {
    set_map_coordinates_to_Y(context.get_mouse_coordinate_x(),context.get_mouse_coordinate_y());
    counter++;
  }
}

void Game_logic::winner_is(Context& context, int counter) {
  if(counter %2 != 0) {
    context.draw_sprite("y_won.bmp",0,0,570,570);
  }
  else {
    context.draw_sprite("x_won.bmp",0,0,570,570);
  }
  context.render();
}

void Game_logic::set_map_coordinates_to_empty(int x,int y) {
  map[x][y] = 0;
}

void Game_logic::set_map_coordinates_to_X(int x,int y) {
  map[x][y] = 1;
}

void Game_logic::set_map_coordinates_to_Y(int x,int y) {
  map[x][y] = 2;
}

bool Game_logic::is_five_in_a_row(int x_coordinate,int y_coordinate) {
  unsigned int x = x_coordinate;
  unsigned int y = y_coordinate;
  int i = 1;
  while(i < 5 && x < map.size() - 1 && map[x][y] == map[x + 1][y] && map[x][y] != 0 ) {
    i++;
    x++;
  }
  x = x_coordinate;
  while(i < 5 && x > 0 && map[x][y] == map[x - 1][y] ) {
    i++;
    x--;
  }
  return i >= 5;
}

bool Game_logic::is_five_in_a_column(int x_coordinate,int y_coordinate) {
  unsigned int x = x_coordinate;
  unsigned int y = y_coordinate;
  int i = 1;
  while(i < 5 && y < map.size() - 1 && map[x][y] == map[x][y + 1] ) {
    i++;
    y++;
  }
  y = y_coordinate;
  while(i < 5 && y > 0 && map[x][y] == map[x][y - 1] ) {
    i++;
    y--;
  }
  return i >= 5;
}

bool Game_logic::is_five_in_diagonal_up(int x_coordinate,int y_coordinate) {
  unsigned int x = x_coordinate;
  unsigned int y = y_coordinate;
  int i = 1;
  while(i < 5 && x < map.size() - 1 && map[x][y] == map[x + 1][y + 1] ) {
    i++;
    x++;
    y++;
  }
  x = x_coordinate;
  y = y_coordinate;
  while(i < 5 && x > 0 && map[x][y] == map[x - 1][y - 1] ) {
    i++;
    x--;
    y--;
  }
  return i >= 5;
}

bool Game_logic::is_five_in_digaonal_down(int x_coordinate,int y_coordinate) {
  unsigned int x = x_coordinate;
  unsigned int y = y_coordinate;
  int i = 1;
  while(i < 5 &&  x > 0 && y > 0 &&  map[x][y] == map[x - 1][y + 1] ) {
    i++;
    x--;
    y++;
  }
  x = x_coordinate;
  y = y_coordinate;
  while(i < 5 &&  x < map.size() - 1  &&  y < map.size() - 1 && map[x][y] == map[x + 1][y - 1] ) {
    i++;
    x++;
    y--;
  }
  return i >= 5;
}

bool Game_logic::is_someone_won(int x, int y) {
  return is_five_in_a_row(x,y) || is_five_in_a_column(x,y) || is_five_in_diagonal_up(x,y) || is_five_in_digaonal_down(x,y);
}

void Game_logic::draw_matrix() {
  for(unsigned int i = 0; i < map.size(); i++) {

    for(unsigned int j = 0; j < map.size(); j++) {
      std::cout << map[i][j];
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}
