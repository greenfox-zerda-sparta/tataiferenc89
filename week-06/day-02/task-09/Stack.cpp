/*
 * Stack.cpp
 *
 *  Created on: 2016 nov. 22
 *      Author: Feri
 */

#include "Stack.h"


Stack::Stack() {
  counter = 0;
}

void Stack::stack_push(int value) {
  if (counter >= 5) {
    throw full;
  }
  array[counter] = value;
  counter ++;
}
int Stack::stack_pop() {
  if (counter == 0) {
    throw empty;
  }
  counter--;
return array[counter];
}
std::string Stack::interpretException(status exception) {
  switch (exception) {
    case full :
      return "The stack is full";
      break;
    case empty :
      return "The stack is empty already";
      break;
  }
  return 0;
}
