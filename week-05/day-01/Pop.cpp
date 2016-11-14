/*
 * Pop.cpp
 *
 *  Created on: 2016 nov. 14
 *      Author: Feri
 */

#include "Pop.h"

Pop::Pop(string artist, string title){
  this->setArtist(artist);
  this->setTitle(title);
  this->genre = "Pop";
}
