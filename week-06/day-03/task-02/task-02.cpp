#include <iostream>
#include <string>

using namespace std;
template <class T>
void first_to_third(T *array) {
  array[2] += array[0];
}
int main() {
  // create a function template that takes fix long array
  // and add the 1st element of it to the third
  int array [5] = {13,2,3,4,5};
  first_to_third(array);
  for (int i = 0; i < 5 ; i++){
    cout << array[i] << ",";
  }
  cout << endl;
  float array_float[5] = {10.1,2.2,3.3,4.4,5.5};
  first_to_third(array_float);
  for (int i = 0; i < 5 ; i++){
    cout << array_float[i] << ",";
  }
  cout << endl;
  string array_string[5] = {"egy","ketto","harom","negy","ot"};
  first_to_third(array_string);
  for (int i = 0; i < 5 ; i++){
    cout << array_string[i] << ",";
  }
  return 0;
}
