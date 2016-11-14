/*
 * Jukebox.h
 *
 *  Created on: 2016 nov. 14
 *      Author: Feri
 */
#include <iostream>
#include <string>
using namespace std;
#include "song.h"
#ifndef JUKEBOX_H_
#define JUKEBOX_H_

class Jukebox {
public:
  Jukebox();
  void ratingSong(string, string, unsigned int);
  float averageArtist(string);
  float averageGenre(string);
  string bestSong();
  string printSongs();
  string topGenre();
  void addSong(Song& song);
  unsigned int song_counter;
private:
  Song** songs;
};

#endif /* JUKEBOX_H_ */
