#include <iostream>

using namespace std;
  void swap(int *firstpointervalue, int *secondpointervalue){
  int* temp=firstpointervalue;
  firstpointervalue=secondpointervalue;
  secondpointervalue=temp;
  }

int main() {
  int first = 12;
  int second = 54;
  cout << "Original values"<< endl << first << " And its adress "<< &first<< endl << second<< " And its adress "<< &second << endl;
  // Write a function that takes two int pointers and swaps the values where the pointers point
  swap(first,second);
  cout << "Swapped values"<< endl << first << " And its adress "<< &first<< endl << second<< " And its adress "<< &second << endl;
  return 0;
}
