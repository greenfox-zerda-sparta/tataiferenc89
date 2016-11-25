#include <iostream>
#include <string>
#include <vector>
using namespace std;

void incrase_inner_vector_elements(vector<int>& v) {
  for(int i = 0; i < 5; i++){
  v[i]++;
  }
}
int main() {
  //create a vector of vector of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector
  //create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)
  vector<vector<int>> example(5,(vector<int>(5,0)));
  incrase_inner_vector_elements(example[2]);
  for (unsigned int i = 0; i < 5; i++) {
    cout << "Vector " << i << ": ";
    for (unsigned int j = 0; j < 5; j++) {
      cout << example[i][j];
      }
    cout << endl;
    }
return 0;
}
