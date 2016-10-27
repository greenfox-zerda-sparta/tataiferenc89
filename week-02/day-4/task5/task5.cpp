#include <iostream>

using namespace std;
string negative(int *array, int length){
  for(int i = 0 ; i < length ; i++){
    if(array[i] < 0){
      return "This array includes at least one negative number.";
    }
  }
 return "The array is not includes any negative number.";
}
int main() {
  int numbers[] = {6, 5, 3, 4, 1, 8, 7, 11, 23, 23, -3232,23, 12, 12, 32};
  int length = sizeof(numbers) / sizeof(int);
  // Write a function that decides if an array includes at least one negative number or not
  cout << negative(numbers , length);
  return 0;
}
