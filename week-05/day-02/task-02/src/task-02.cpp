//============================================================================
// Name        : task-02.cpp
// Author      : Feri
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  // Open a file called "second-exercise.txt"
  // Read the content of the file and print it to the terminal window
  ifstream my_file;
  my_file.open("second-exercise.txt");
  string file_content;
  my_file >> file_content;
  cout << file_content;
  my_file.close();
  return 0;
}
