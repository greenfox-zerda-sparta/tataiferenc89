#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void string_to_file(string,string);

int main() {
  // Write a function that writes a string to a file
  // It should take the filename and the content as a string parameter
  string content = "Egyszer volt hol nem volt volt egyszer egy....";
  string_to_file("seventh-exercise.txt",content);
  return 0;
}
void string_to_file(string filename,string content) {
  ofstream my_file;
  my_file.open(filename);
  my_file << content;
  my_file.close();
}
