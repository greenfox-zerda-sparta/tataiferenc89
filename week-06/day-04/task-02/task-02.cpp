#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  //create an integer vector with the size of 5 and print all elements of it
  vector <int> example(5,1);
  for(unsigned int i = 0; i < example.size(); i++) {
    cout << example[i] << ",";
  }
return 0;
}
