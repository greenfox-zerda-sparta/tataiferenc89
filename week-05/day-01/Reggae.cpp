/*
 * Reggae.cpp
 *
 *  Created on: 2016 nov. 14
 *      Author: Feri
 */

#include "Reggae.h"

Reggae::Reggae(string artist, string title){
  this->setArtist(artist);
  this->setTitle(title);
  this->genre = "Reggae";
}
bool Reggae::rateSong(unsigned int rate){
  if (rate > 0 && rate <= 4) {
    this->rating += rate;
    this->rate_counter++;
  } else {
    return false;
  }
  return true;
}
