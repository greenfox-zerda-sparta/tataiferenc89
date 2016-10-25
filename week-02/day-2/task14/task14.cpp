#include <iostream>
#include <string>

using namespace std;
int smallest(int array[], int length){
  int small=0;
  for(int i=0; i<= length; i++ ){
	if(array[i]<small){
	small=array[i];
	}
  }
  cout << small;
  return small;
}
int main() {
  int numbers[] = {7, 5, 8, -1, 2} , length;
  length=sizeof(numbers)/sizeof(int);
  // Write a function that takes ana array and its length returns the minimal element
  // in the array (your own min function)
  smallest(numbers,length);
  return 0;
}
