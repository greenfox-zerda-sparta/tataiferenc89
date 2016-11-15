#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  // Create a program that decrypts the file called "reversed-lines.txt",
  // and pritns the decrypred text to the terminal window.
  ifstream my_file;
  my_file.open("tenth-exercise.txt");
  string line;
  while (getline(my_file,line)) {
    reverse(line.begin(),line.end());
    cout << line << endl;
  }
  return 0;
}
