#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two string in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

string* split(string text, unsigned int index) throw(int){
  int index_ = index;
  if(index > text.length()) {
    throw (index_);
  }
  string* temp = new string[2];
  for (unsigned int i = 0; i < index; i++) {
    temp[0] += text[i];
  }
  for (unsigned int i = index; i < text.length(); i++) {
    temp[1] += text[i];
  }
  return temp;
}

int main() {
  string* example = 0;
  try {
    example = split("krumplisalata", 16);
    cout << example[0] << endl << example[1];
  }
  catch(int x) {
    cout << "The given text is less than " << x << " character";
  }
  return 0;
}
