#include <iostream>
#include <string>
#include <vector>
using namespace std;
  void incrase_one_element(int &x) {
    ++x;
  }
int main() {
  //create a vector of vector of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector
  //create a function which increase a specific element of an inner vector by 1
  vector<vector<int>> example(5,(vector<int>(5,0)));
  incrase_one_element(example[2][4]);
  for (unsigned int i = 0; i < 5; i++) {
    cout << "Vector " << i << ": ";
    for (unsigned int j = 0; j < 5; j++) {
      cout << example[i][j];
      }
    cout << endl;
    }
  return 0;
}
