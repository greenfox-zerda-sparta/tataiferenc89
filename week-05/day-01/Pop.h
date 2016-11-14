/*
 * Pop.h
 *
 *  Created on: 2016 nov. 14
 *      Author: Feri
 */
#include <iostream>
#include <string>
using namespace std;
#include "song.h"
#ifndef POP_H_
#define POP_H_

class Pop : public Song {
public:
  Pop(string, string);
};

#endif /* POP_H_ */
