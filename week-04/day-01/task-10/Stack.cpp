/*
 * Stack.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: Feri
 */
#include <iostream>
#include <string>

using namespace std;
#include "Stack.h"

Stack::Stack(){}

int Stack::size_of_stack(){
  return this->current_size;
}
void Stack::push(int value){
  this->array[current_size] = value;
  this->current_size++;
  if (current_size > size * 0.8) {
    size*=2;
    double* temp_array = new double[size];
    for (int i = 0; i < current_size; i++) {
      temp_array[i] = this->array[i];
    }
    delete[] this->array;
    this->array = temp_array;
  }
}

int Stack::pop() {
  --current_size;
  return this->array[current_size];
}

Stack::~Stack(){
  delete[] array;
}
