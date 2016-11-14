/*
 * Reggae.h
 *
 *  Created on: 2016 nov. 14
 *      Author: Feri
 */
#include <iostream>
#include <string>
using namespace std;
#include "song.h"
#ifndef REGGAE_H_
#define REGGAE_H_

class Reggae : public Song {
public:
  Reggae(string, string);
  bool rateSong(unsigned int rate);
private:
};
#endif /* REGGAE_H_ */
