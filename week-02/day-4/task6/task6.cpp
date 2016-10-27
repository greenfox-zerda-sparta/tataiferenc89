#include <iostream>
#include <string>

using namespace std;
int evencounter(int *array){
  int num;
  for (int i = 0 ; i <10 ; i++){
    if (array[i]%2 == 0 && array[i+1]%2 == 0){
      num++;
    }
  }
  cout <<"In this array an even number " <<num<< " times follows another even number.";
return num;
}
int main() {
  int numbers[] = {5, 2, 6, 3, 4, 8, 5, 2, 2, 2};

  // Write a function that counts how many times is an even number is folowed by
  // another even number in an array
  evencounter(numbers);
  return 0;
}
