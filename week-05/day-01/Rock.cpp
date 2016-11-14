/*
 * Rock.cpp
 *
 *  Created on: 2016 nov. 11
 *      Author: Feri
 */

#include "Rock.h"

Rock::Rock(string artist, string title){
  this->setArtist(artist);
  this->setTitle(title);
  this->genre = "Rock";
}
bool Rock::rateSong(unsigned int rate){
  if (rate > 1 && rate <= 5) {
    this->rating += rate;
    this->rate_counter++;
  } else {
    return false;
  }
  return true;
}
