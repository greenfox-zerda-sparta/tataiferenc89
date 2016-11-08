/*
 * Pirate.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: Feri
 */
#include <iostream>
#include <string>

using namespace std;

#include "Pirate.h"

Pirate::Pirate(){}

int Pirate::drink_rum() {
  return this->rum_counter++;
  }
int Pirate::getRum_counter(){
  return this->rum_counter;
}
string Pirate::hows_goin_mate() {
  if (this->rum_counter >= 5){
    return "Arrrrr";
  } else {
    return "Nothin";
  }
}
