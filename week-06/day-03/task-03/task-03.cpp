#include <iostream>
#include <string>

using namespace std;

template <class T>
void print_out_array(T *array) {
  for (int i = 0; i < 5 ; i++){
    cout << array[i] << ",";
  }
  cout << endl;
}
int main() {
  // create a function template which takes in an array, and the size of it
  // print all the elements of the array
  int array [5] = {13,2,3,4,5};
  print_out_array(array);
  float array_float[5] = {10.1,2.2,3.3,4.4,5.5};
  print_out_array(array_float);
  string array_string[5] = {"egy","ketto","harom","negy","ot"};
  print_out_array(array_string);
  return 0;
}
