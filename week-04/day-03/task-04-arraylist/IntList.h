/*
 * IntList.h
 *
 *  Created on: 2016 nov. 10
 *      Author: Feri
 */

#ifndef INTLIST_H_
#define INTLIST_H_

using namespace std;

class IntList {
private:
  int mLength = 0;
//We dont' want others to set the lenght of this list
protected:
  void setLength(int _length);
public:
  // We want the descendant classes to implement (defin)
  // How these methods will actually work.
  IntList(int);
  virtual void append(int _a) = 0;
  virtual void insert(int _idx, int _a) = 0;
  virtual int getFirst() = 0;
  virtual int getLast() = 0;
  int getLength();
  virtual bool isEmpty() = 0;
  virtual ~IntList();
};

  #endif

