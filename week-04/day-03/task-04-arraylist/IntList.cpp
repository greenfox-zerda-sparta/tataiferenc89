/*
 * IntList.cpp
 *
 *  Created on: 2016 nov. 10
 *      Author: Feri
 */
#include <iostream>
#include "IntList.h"

using namespace std;

IntList::IntList(int _length) {
  this->setLength(_length);
}

void IntList::setLength(int _length) {
  this->mLength = _length;
}

int IntList::getLength() {
  return mLength;
}

IntList::~IntList(){

}
