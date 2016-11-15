#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Create a program that decrypts the file called "duplicated-chars.txt",
  // and pritns the decrypred text to the terminal window.
  ifstream my_file;
  my_file.open("nineth-exercise.txt");
  string line;
  while (getline(my_file,line)) {
    for (unsigned int i = 0; i < line.length(); i++) {
      if (i%2==0) {
        cout << line[i];
      }
    }
    cout << endl;
  }
  return 0;
}
