#include <iostream>
#include <algorithm>
using namespace std;
void reverse(int *array, int length){
  int i,temp;
    for(i = 0; i<length/2 ; i++){
      temp = array[length-i-1];
      array[length-i-1] = array[i];
      array[i] = temp;
  }
}
int main() {
  int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  // Write a function that takes an array and its length than reverses the array
  reverse(array,8);
  for(int i = 0 ; i<8 ; i++){
  cout << array[i];
  }
  return 0;
}
