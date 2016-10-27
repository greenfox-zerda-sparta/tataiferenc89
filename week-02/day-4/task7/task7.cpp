#include <iostream>

using namespace std;
string drawtriangle(int number){
  string stars="";
  for(int i = 0 ; i < number ; i++){
    stars += '*';
    cout << stars << endl;
  }
return stars;
}
int main() {
  int number = 10;
  // create a function that takes a number and prints a triangle like this:
  // *
  // **
  // ***
  // ****
  // *****
  // ******
  //
  // The triangle should have as many lines as the value in the argument
  drawtriangle(number);
  return 0;
}
