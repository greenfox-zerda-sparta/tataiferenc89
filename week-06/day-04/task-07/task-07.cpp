#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  //create a vector of integers with the size of 20
  //fill this vector with random numbers from 0 to 10
  //print the items of the vector
  //remove the even numbers, then print the items again
  srand(time(0));
  vector<int> example(20);
  for (unsigned int i = 0; i < example.size(); i++) {
    example[i] = (rand()%11);
  }
  for (unsigned int i = 0; i < example.size(); i++) {
    cout << example[i] << ",";
  }
  cout << endl;
  for (unsigned int i = 0; i < example.size(); i++) {
    if(example[i]%2 == 0) {
      example.erase(example.begin() + i);
      --i;
    }
  }
  for (unsigned int i = 0; i < example.size(); i++) {
    cout << example[i] << ",";
  }
return 0;
}
