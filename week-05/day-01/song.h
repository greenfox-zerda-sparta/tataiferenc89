/*
 * song.h
 *
 *  Created on: 2016 nov. 11
 *      Author: Feri
 */
#include <iostream>

#ifndef SONG_H_
#define SONG_H_
using namespace std;

class Song {
public:
  Song();
  string printSong();
  string getTitle();
  string getArtist();
  string getGenre();
  unsigned int getRateCounter();
  unsigned int getRating();
  void setRating(unsigned int);
  void setArtist(string);
  void setTitle(string);
  float ratingAverage();
  virtual bool rateSong(unsigned int);
  virtual ~Song();
  unsigned int rate_counter;
  unsigned int rating;
  string genre;
private:
  string artist;
  string title;
};

#endif /* SONG_H_ */
