#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
  ifstream my_file;
  my_file.open("twelfth-exercise.txt");
  string line;
  while (getline(my_file,line)) {
    for (unsigned int i = 0; i < line.length(); i++) {
      if(line[i] == ' ') {
        cout << ' ';
      } else {
        cout << char(line[i]-1);
      }
    }
    cout << endl;
  }
  my_file.close();
	return 0;
}
