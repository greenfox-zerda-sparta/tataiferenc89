#include <iostream>
#include <string>

using namespace std;
  template <class T>
  T return_first_element(T *array) {
    return array[0];
  }
int main() {
  // create a function template the takes in a fix long array and prints the 1st element of it
  int array_int[5] = {32,24,35,44,51};
  cout << return_first_element(array_int) << endl;
  float array_float[5] = {86.95,45.27,33.1};
  cout << return_first_element(array_float) << endl;
  string array_string[5] = {"kecsap","mustar","majonez"};
  cout << return_first_element(array_string) << endl;
  return 0;
}
