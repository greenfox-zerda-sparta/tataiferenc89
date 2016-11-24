#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
  //create a vector of integers with the size of 10, fill them with random numbers
  //create a vector of doubles and reserve place for 10 items
  //push and item to the end of the vector with the double places
  //print which vectors size is higher (and why?)
  srand(time(0));
  vector<int> example_1(10);
  for (unsigned int i = 0; i < 10; i++) {
    example_1[i] = (rand()%11);
  }
  vector<double> example_2;
  example_2.reserve(10);
  example_2.push_back(45.2);
  cout << example_1.size() << "," << example_2.size();
  return 0;
}
