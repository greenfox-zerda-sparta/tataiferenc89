/*
 * IntArrayList.h
 *
 *  Created on: 2016 nov. 10
 *      Author: Feri
 */
#ifndef INTARRAYLIST_H_
#define INTARRAYLIST_H_
#include "IntList.h"
using namespace std;

class IntArrayList : public IntList{
private:
  int* mArray = new int[getLength()];

public:
  IntArrayList(int);

  void fillArray();

  void printArray();

  void append(int _a);

  virtual void insert(int _idx, int _a);

  int getFirst();

  int getLast();

  bool isEmpty();

  ~IntArrayList();
};

#endif /* INTARRAYLIST_H_ */
