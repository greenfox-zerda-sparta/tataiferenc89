//============================================================================
// Name        : task-01.cpp
// Author      : Feri
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;
// Open a file called "first-exercise.txt"
// Write your name in it as a single line

int main() {
  ofstream my_file;
  my_file.open("first-exercise.txt");
  my_file << "Tatai Ferenc";
  my_file.close();
  return 0;
}
