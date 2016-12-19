/*
 * Fibonacci.cpp
 *
 *  Created on: 2016 dec. 19
 *      Author: Feri
 */

#include "Fibonacci.h"

int Fibonacci::fibonacci(int n){
  if (n < 0){
    throw 1;
  }
  else if(n <= 1) {
    return n;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
