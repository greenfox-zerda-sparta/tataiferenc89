/*
 * Rock.h
 *
 *  Created on: 2016 nov. 11
 *      Author: Feri
 */
#include <iostream>
#include <string>
using namespace std;
#include "song.h"
#ifndef ROCK_H_
#define ROCK_H_

class Rock : public Song {
public:
  Rock(string, string);
  bool rateSong(unsigned int rate);
private:
};
#endif /* ROCK_H_ */
