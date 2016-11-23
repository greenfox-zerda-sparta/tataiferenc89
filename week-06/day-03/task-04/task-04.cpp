//============================================================================
// Name        : task-04.cpp
// Author      : Feri
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
template <class T>
void sort_array(T *array) {
  for (int i = 0; i < 5; i++) {
    for (int j = i+1; j < 5; j++) {
      T temp =0;
      if(array[i] < array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}
int main() {
  // create a function template that takes an array and sort it in a descending order
  int int_array[5] = {1,2,3,4,5};
  sort_array(int_array);
  for (unsigned int i = 0; i < 5; i++) {
    cout << int_array[i] << ",";
  }
  cout << endl;
  float float_array[5] = {1.1,2.2,3.3,4.4,5.5};
  sort_array(float_array);
  for (unsigned int i = 0; i < 5; i++) {
    cout << float_array[i] << ",";
  }
  cout << endl;
  return 0;
}
