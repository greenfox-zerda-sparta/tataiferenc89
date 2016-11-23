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
    throw 1;
  }
  array[counter] = value;
  counter ++;
}
int Stack::stack_pop() {
  if (counter == 0) {
    throw 2;
  }
  counter--;
return array[counter];
}
std::string Stack::interpretException(int exception) {
  switch (exception) {
    case 1 :
      return "The stack is full";
      break;
    case 2 :
      return "The stack is empty already";
      break;
  }
  return 0;
}
