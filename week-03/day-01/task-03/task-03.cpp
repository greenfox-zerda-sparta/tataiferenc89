#include <iostream>
using namespace std;
/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it should print the average of the nubmers.
 * It should delete any dynamically allocated resource before the program exits.
 */
void avrage(){
  int counter = 0;
  float sum = 0;
  cout << "How many numbers do you want to add?"<< endl;
  cin >> counter;
  float* pointer= new float[counter];
  cout << "give me " << counter << " number" << endl;
  for (int i = 0; i < counter ; i++){
    cin >> pointer[i];
    sum+=pointer[i];
  }
  cout << "The avrage is " << sum/counter;
  delete[] pointer;
  pointer = nullptr;
}
int main() {
  avrage();
  return 0;
}
