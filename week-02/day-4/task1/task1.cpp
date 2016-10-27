#include <iostream>
#include <string>

using namespace std;
void square(int *array){
  for(int i=0;i<7;i++){
    array[i]=array[i]*array[i];
	}
}
int main() {
  // Write a function that takes an array and squares all the elements in the array
  int array[7] = {1, 2, 3, 4, 5, 6, 7};
  square(array);
  for(int i=0;i<7;i++){
    cout << array[i] << endl;
  }
  return 0;
}
