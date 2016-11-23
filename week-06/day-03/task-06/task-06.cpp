#include <iostream>
#include <string>

using namespace std;
template <class T>
double sum_of_elements(T *array, int length) {
  double sum = 0;
  for (int i = 0; i < length; i ++) {
    sum += array[i];
  }
  return sum;
}
template <>
double sum_of_elements<char>(char *array, int length) {
  double sum = 0;
  for (int i = 0; i < length; i ++) {
    sum += int(array[i]-96);
  }
  return sum;
}
template <>
double sum_of_elements<string>(string *array, int length) {
  double sum = 0;
  for (int i = 0; i < length; i ++) {
    sum += int(array[i][0]-96);
  }
  return sum;
}
int main() {
  // Create a function template that takes an array, and its length and return the sum of his elements
  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet
  // Create a template specialization for string types, that it returns the sum of the string's first characters position in the alphabet
  int int_array[5] = {1,2,3,4,5};
  double sum_of_int_array = sum_of_elements(int_array,5);
  cout <<"Sum of int array elements: "<< sum_of_int_array << endl;

  char char_array[5] = {'a','h','n','r','p'};
  double sum_of_char_array = sum_of_elements(char_array,5);
  cout <<"Sum of char array elements: "<< sum_of_char_array << endl;

  string string_array[5] = {"alma","banana","cumi","delfin","eper"};
  double sum_of_string_array = sum_of_elements(string_array,5);
  cout <<"Sum of string array elements: "<< sum_of_string_array << endl;
  return 0;
}
