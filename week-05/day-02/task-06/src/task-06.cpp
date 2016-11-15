#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string return_file_as_string(string filename);

int main() {
  // Write a function that reads the content of a file and returns it as a string
  // It should take the filename as a string parameter
  string print_file = return_file_as_string("sixth-exercise.txt");
  cout << print_file;
  return 0;
}
string return_file_as_string(string filename) {
  ifstream my_file;
  my_file.open(filename);
  string file_contant, line;

  if (my_file.is_open()) {
    while(my_file >> line) {
      file_contant += line + '\n';
  }
  } else {
    cout << "Could not open the file";
  }
  my_file.close();

return file_contant;
}
