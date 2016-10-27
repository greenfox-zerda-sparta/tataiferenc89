#include <iostream>
#include <string>

// Create a game that figures a number that the user picked between 0 and 10
// It should ask questions like:
//  - Is the number greater than 5? [y/n]
//  - Is the number smaller than 4? [y/n]
// (don't have to ask both kind)
//
// It should wait for input after the question
//
// If the answer is not "y" or "n" it should re-ask the question;
//
// If the program knows enough it should tell the picked number like:
// Your number is: 8

using namespace std;

int main() {
int min = 0;
int max = 10;
int tip =(max - min) / 2;
char answer;
cout << "Think about a number between 0 and 10" << endl;
while((max - min)!= 1) {
  cout << "Is it smaller or equal to " << tip << " ? [Y/N]" << endl;
  cin >> answer;
  if (answer == 'y' || answer == 'Y') {
    max = tip;
    tip -= (max - min) / 2;
  }
  else if(answer == 'n' || answer == 'N') {
    min = tip;
    tip += (max - min) / 2;
  }
  else {
    cout << "Wrong character, try a again Y for yes, N for no."<< endl;
  }
}
cout << "The number you thought of is "<< max <<".";
return 0;
}
