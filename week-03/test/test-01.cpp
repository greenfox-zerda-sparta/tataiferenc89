#include <iostream>
using namespace std;
/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */
bool bigger_or_equal(int array[],int array_length, int number){
  bool biggerequal;
  int counter = 0;
  for (int i=0 ; i < array_length ; i++) {
    if (number <= array[i]){
      counter++ ;
    }
  }
  if (counter>0) {
    biggerequal=true;
  }
  else {
    biggerequal=false;
  }
return biggerequal;
}

int main() {
  int array[] = {3, 2, 4, 6, -1};
  int array_length = sizeof(array)/sizeof(int);
  int number = 10;
  if(bigger_or_equal(array, array_length, number) == 1 ) {
    cout << "There is a bigger or equal number than " << number << " in the array." << endl;
  }
  else {
    cout << "The given number " << number << " is bigger than the elements in the array";
  }
 return 0;
}

