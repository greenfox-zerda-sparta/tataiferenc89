/*
 * Sum.cpp
 *
 *  Created on: 2016 dec. 19
 *      Author: Feri
 */

#include "Sum.h"

int Sum::sum_of_numbers(std::vector<int>& numbers) {
  int sum;
  for(int i = 0; i < numbers.size(); i++) {
    sum += numbers[i];
  }
  return sum;
}
