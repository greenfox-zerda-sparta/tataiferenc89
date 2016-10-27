#include <iostream>

using namespace std;
void drawdimond(int number){
  for(int i = 1 ; i < number ; i++){
    for(int j = 1 ; j <=(number-i) ; j++){
      cout << " ";
    }
    for(int k = 1 ; k <= ((i*2)-1) ; k++){
      cout << "*";
    }
  cout << endl;
  }
  for(int i = number ; i > 0 ; i--){
    for(int j = 1 ; j <= number-i; j++){
            cout << " ";
          }
    for(int k = 1 ; k <= (i*2)-1 ; k++){
            cout << "*";
          }
    cout << endl;
  }
}
int main() {
  int number = 10;
  // Create a function that takes a number and prints a diamond like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //  *********
  //   *******
  //    *****
  //     ***
  //      *
  //
  // The diamond should have as many lines as the value in the argument
  drawdimond(number);
  return 0;
}
