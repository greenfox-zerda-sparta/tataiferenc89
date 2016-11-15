#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Write a program that prints a content of a file called "fifth-exercise.txt"
  // If it could not open the file it should write: "Could not open the file" to the standard error
  // The program should return 2 if there where an error
  ifstream my_file;
  my_file.open("fifth-exercise.txt");
  string file_contant;
  if (my_file.is_open()) {
    while(my_file >> file_contant) {
      cout << file_contant << endl;
    }
  } else {
    cout << "Could not open the file";
    return 2;
  }
  return 0;
}
