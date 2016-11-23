#include <iostream>
#include <string>
using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.


const char* return_element(int element) throw(int, const char*){
  if(element > 5) {
    throw 5;
  }
  if (element < 0) {
    throw "negative number";
  }
  const char* sentence[6] = {"What", "a", "pleasant", "surprie", "this", "is."};
return sentence[element];
}
int main() {
  string example;
  try {
    example = return_element(-21);
  }
  catch (int x) {
    cout << "There are only " << x << " elements in the array.";
  }
  catch (const char* y) {
    cout << y;
  }
  cout << example;
return 0;
}
