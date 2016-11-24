#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
  //Create a vector of integers
  //reserve place for 10 element, then fill those place with random numbers between 0 and 10
  srand(time(0));
  vector<int> example;
  example.reserve(10);
  for (unsigned int i = 0; i < 10; i++) {
    example[i] = (rand()%11);
  }
  for (unsigned int i = 0; i < 10; i++) {
    cout << example[i] << ",";
  }
  return 0;
}
