#include <iostream>
using namespace std;
/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */
float multiply_pointer(float* pointer, float number) {
  *pointer *= number;
return *pointer;
}
int main() {
  float total = 123;
  float* pointer = &total;
  cout << "The multiply value of total is: " << multiply_pointer(pointer,5);
  return 0;
}
