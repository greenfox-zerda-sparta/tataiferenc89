#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Create a program that decrypts the file called "reversed-order.txt",
  // and pritns the decrypred text to the terminal window.

  ifstream my_file;
  my_file.open("eleventh-exercise.txt");
  string line;
  int number_of_lines = 0, i = 0;

  while (getline(my_file,line)) {
    number_of_lines++;
  }

  my_file.close();
  my_file.open("eleventh-exercise.txt");

  string array_of_lines[number_of_lines];
  while (getline(my_file,array_of_lines[i])){
    i++;
  }

  for (int i = number_of_lines - 1; i >= 0; i--) {
    cout << array_of_lines[i] << endl;
  }

  my_file.close();
  return 0;
}
