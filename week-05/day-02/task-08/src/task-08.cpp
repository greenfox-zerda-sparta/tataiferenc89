#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool copy_from_file_to_file(string,string);

int main() {
  // Write a function that copies a file to an other
  // It should take the filenames as parameters
  // It should return a boolean that shows if the copy was successful
  if (copy_from_file_to_file("from.txt","to.txt")==1) {
    cout << "Copy done!";
  } else {
    cout << "Something went wrong";
  }
  return 0;
}
bool copy_from_file_to_file(string filename_from,string filename_to) {
  ifstream my_file_from;
  ofstream my_file_to;
  string temp;
  my_file_from.open(filename_from);
  my_file_to.open(filename_to);
  if(my_file_from.is_open() && my_file_to.is_open()) {
    while (my_file_from >> temp) {
      my_file_to << temp + ' ';
    }
    my_file_from.close();
    my_file_to.close();
    return true;
  } else {
    return false;
  }
}


