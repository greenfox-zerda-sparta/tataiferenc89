/*
 * Car.cpp
 *
 *  Created on: 2016 nov. 24
 *      Author: Feri
 */

#include "Car.h"
Car::Car(){

}
Car::Car(vector<string> type,vector<string> color) {
  this->car_type = type[rand()%type.size()];
  this->car_color = color[rand()%color.size()];
  this->plate = generate_plate();
}
string Car::get_car_type() {
  return this->car_type;
}
string Car::get_car_color() {
  return this->car_color;
}
string Car::get_plate() {
  return this->plate;
}
string Car::generate_plate() {
  string temp_plate = "";
  char temp_char;
  for (int i = 0; i < 3; i++) {
    temp_char = (rand()%25)+65;
    temp_plate += temp_char;
  }
  temp_plate += "-";
  for (int i = 0; i < 3; i++) {
    temp_char = (rand()%10)+48;
    temp_plate += temp_char;
  }
  return temp_plate;
}

