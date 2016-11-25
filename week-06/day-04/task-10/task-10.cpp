#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int divisor_counter(int x) {
  int counter = 0;
  for(int i = 1; i <= x; i++ ) {
    if(x%i == 0){
      counter ++;
    }
  }
  return counter;
}
void sort_vector(vector<double> &v) {
  for (unsigned int i = 0; i < v.capacity(); i++) {
    for (unsigned int j = i+1; j < v.capacity(); j++) {
      int temp =0;
      if(v[i] > v[j]) {
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
  }
}
int main() {
  //find how much integer divisor 2400 has
  //create a vector of doubles, reserve place for the divisors of 2400
  //fill this places with random numbers from 0 to 2400
  //sort them in ascending order
srand(time(0));
int divisors = divisor_counter(2400);
vector<double> example;
example.reserve(divisors);
for (unsigned int i = 0; i < example.capacity(); i++) {
  example[i] = rand()%2401;
}
sort_vector(example);
for (unsigned int i = 0; i < example.capacity(); i++) {
  cout << example[i] << ",";
}
return 0;
}
