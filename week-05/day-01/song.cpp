/*
 * song.cpp
 *
 *  Created on: 2016 nov. 11
 *      Author: Feri
 */
#include <cmath>
#include "song.h"

Song::Song() {
this->rating = 0;
this->rate_counter = 0;
}
unsigned int Song::getRateCounter(){
  return rate_counter;
}

unsigned int Song::getRating() {
 return rating;
}
void Song::setRating(unsigned int rating) {
 this->rating = rating;
}

string Song::getArtist() {
  return this->artist;
}

void Song::setArtist(string artist) {
  this->artist = artist;
}

string Song::getTitle() {
  return this->title;
}

void Song::setTitle(string title) {
  this->title = title;
}

string Song::getGenre(){
  return this->genre;
}

string Song::printSong() {
  return this->getArtist() + ", " +  this->getTitle() + ", " + this->genre + "\n";
}

bool Song::rateSong(unsigned int rate) {
  if (rate > 0 && rate <= 5) {
    this->rating += rate;
    this->rate_counter++;
  } else {
    return false;
  }
  return true;
}

float Song::ratingAverage() {
  return (float)this->rating/this->rate_counter;
}

Song::~Song(){
}
