/*
 * Car.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: Feri
 */

#include "Car.h"

Car::Car(string type, int km) {
  this->type = type;
  this->km = km;
}
void Car::Run(int run_km) {
  this->km = km+run_km;
}
int Car::getKm() {
  return this->km;
}
string Car::getType() {
  return this->type;
}

Car::~Car() {
}

