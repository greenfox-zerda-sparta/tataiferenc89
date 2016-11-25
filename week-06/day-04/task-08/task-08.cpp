#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  //create a vector of characters with the size of 8
  //ask the user to fill this vector with characters one by one
  //at the end make sure the vector holds the letters of "GREENFOX"
  //so correct the user if he/she gives a different letter from the one we want them to give :)
  vector<char> example(8);
  const char* greenfox[8] = {"G","R","E","E","N","F","O","X"};
  int i = 0;
  while (i != 8) {
    char temp;
    cout << "Add a character" << endl;
    cin >> temp;
    try {
      if(temp == *greenfox[i]) {
        example[i] = (char)temp;
        i++;
      } else {
        throw 1;
      }
    } catch (int x) {
       cout << "Wrong character, I expected " << *greenfox[i] << endl;
    }
  }

  return 0;
}
