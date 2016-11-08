/*
 * Stack.h
 *
 *  Created on: 2016 nov. 8
 *      Author: Feri
 */
#include <iostream>
#include <string>

using namespace std;
#ifndef STACK_H_
#define STACK_H_

class Stack {

public:
  Stack();

  int size_of_stack();

  void push(int);

  int pop();

  ~Stack();
private:
  int size = 6;
  double* array = new double[size];
  int current_size = 0;

};

#endif /* STACK_H_ */
