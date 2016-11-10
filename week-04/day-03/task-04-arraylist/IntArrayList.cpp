/*
 * IntArrayList.cpp
 *
 *  Created on: 2016 nov. 10
 *      Author: Feri
 */
#include <iostream>
#include "IntArrayList.h"
#include "IntList.h"
using namespace std;

IntArrayList::IntArrayList(int _length) : IntList(_length){
  this->setLength(_length);
}

void IntArrayList::fillArray(){
  for (int i = 0; i < getLength(); i++) {
    mArray[i] = i;
  }
}

void IntArrayList::printArray() {
  for (int i = 0; i < getLength(); i++) {
      cout << mArray[i] << endl;
    }
}

void IntArrayList::append(int _a) {
  this->setLength((this->getLength())+1);
  int* temp_array = new int [this->getLength()];
  for (int i =0; i < this->getLength(); i++) {
    temp_array[i] = mArray[i];
  }
  temp_array[this->getLength()-1] = _a;
  delete[] mArray;
  mArray = temp_array;
}

void IntArrayList::insert(int _idx, int _a) {
  this->setLength((this->getLength())+1);
  int* temp_array = new int [this->getLength()];
  for (int i =0; i < _idx; i++) {
      temp_array[i] = mArray[i];
    }
  for (int i =_idx; i < this->getLength(); i++) {
      temp_array[i+1] = mArray[i];
    }
  temp_array[_idx] = _a;
  delete[] mArray;
  mArray = temp_array;
}

int IntArrayList::getFirst() {
  return mArray[0];
}

int IntArrayList::getLast() {
  return mArray[getLength()-1];
}

bool IntArrayList::isEmpty() {
  return getLength() > 0;
}
IntArrayList::~IntArrayList(){
  delete[] mArray;
}
