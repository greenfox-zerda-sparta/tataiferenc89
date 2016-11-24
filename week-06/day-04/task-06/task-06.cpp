#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void add_n_pop(vector<double> &v) {
  int size = v.size();
  v[(rand()%(size-1))] += v[size-1];
  v.pop_back();
}

int main() {
  //create a vector of doubles with the size of 30, with every element equal of 1.5
  //create functions that takes this vector, pick the last element of it and adding its value to
  //an other item from the vector(this item place is random) and remove the last element at the end
  //run this function 20 times, then print every element of the vector
  srand(time(0));
  vector<double> example_1(30,1.5);
  for (int i = 0; i < 20; i++) {
  add_n_pop(example_1);
  }
  for (unsigned int i = 0; i < example_1.size(); i++) {
    cout << example_1[i] << ",";
  }
return 0;
}
