#include <iostream>

using namespace std;
void drawpine(int number){
  for(int i = 1 ; i < number ; i++){
    for(int j = 1 ; j <=(number-i) ; j++){
      cout << " ";
    }
    for(int k = 1 ; k <= ((i*2)-1) ; k++){
      cout << "*";
    }
  cout << endl;
  }
}
int main() {
  int number = 8;
  // Create a function that takes a number and prints a triangle like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //
  // The triangle should have as many lines as the value in the argument
  drawpine(number);
  return 0;
}
