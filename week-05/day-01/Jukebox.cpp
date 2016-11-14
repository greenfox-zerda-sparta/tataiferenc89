/*
 * Jukebox.cpp
 *
 *  Created on: 2016 nov. 14
 *      Author: Feri
 */

#include "Jukebox.h"
#include "song.h"
Jukebox::Jukebox(){
    song_counter = 0;
    songs = NULL;
}

void Jukebox::ratingSong(string artist, string title, unsigned int rate) {
  for (unsigned int i = 0; i < song_counter; i++) {
    if (songs[i]->getArtist() == artist && songs[i]->getTitle() == title) {
      songs[i]->rateSong(rate);
    }
  }
}

float Jukebox::averageArtist(string artist){
  float sum_ratings = 0;
  float sum_counter = 0;
  for (unsigned int i = 0; i < song_counter; i++) {
    if (songs[i]->getArtist() == artist) {
      sum_ratings += songs[i]->rating;
      sum_counter += songs[i]->rate_counter;
    }
  }
  return sum_ratings/sum_counter;
}

float Jukebox::averageGenre(string genre){
  float sum_ratings = 0;
  float sum_counter = 0;
  for (unsigned int i = 0; i < song_counter; i++) {
    if (songs[i]->genre == genre) {
      sum_ratings += songs[i]->rating;
      sum_counter += songs[i]->rate_counter;
    }
  }
  return sum_ratings/sum_counter;
}

string Jukebox::bestSong() {
  Song* best_song = songs[0];
  for (unsigned int i = 1; i < song_counter; i++) {
    if (songs[i]->ratingAverage() > best_song->ratingAverage()) {
      best_song = songs[i];
    }
  }
  return best_song->getTitle();
}

string Jukebox::printSongs(){
  string output = "Songs:\n";
  for (unsigned int i = 0; i < song_counter; i++) {
    output += songs[i]->printSong();
  }
  return output;
}

void Jukebox::addSong(Song& song) {
  Song** temp = new Song*[song_counter + 1];
  if (songs != NULL) {
    for (unsigned int i = 0; i < song_counter; ++i) {
      temp[i] = songs[i];
    }
  }
  temp[song_counter] = &song;
  delete[] songs;
  songs = temp;
  ++song_counter;
}

string Jukebox::topGenre() {
  float best_Genre_average = averageGenre(songs[0]->getGenre());
  string best_Genre_name = songs[0]->getGenre();
  for (unsigned int i = 1; i < song_counter; i++) {
    if (averageGenre(songs[i]->getGenre()) > best_Genre_average) {
      best_Genre_average = averageGenre(songs[i]->getGenre());
      best_Genre_name = songs[i]->getGenre();
    }
  }
  return best_Genre_name;
}
