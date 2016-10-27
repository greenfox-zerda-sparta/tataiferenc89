#include <iostream>

using namespace std;
void fill(int *array, int length){
  for (int i=0;i<length;i++){
    array[i]=i;
    cout << array[i] << endl;
  }
}
int main() {
  int array[10];
  // write a function that takes an array and a length and it fills the array
  // with numbers from zero till the length
  fill(array,10);
  return 0;
}
