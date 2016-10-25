#include <iostream>
#include <string>

using namespace std;

int arrayindex(int array[], int length, int num){
	int j=0;
	for(int i = 0 ; i < length ; i++){
     if(num==array[i]){
       cout <<"The index of the number is :" << i;
     }
     else if (num!=array[i]){
    	 j++;
     }
	 }
	 if (j==length){
	   cout << "-1";
     }
     return num;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  int length=sizeof(numbers)/sizeof(int);
  // Write a function that takes an array, its length and a number
  // and it returns the index of the given number in the array.
  // It should return -1 if did not find it. (linear search)
  arrayindex(numbers,length,12);
  return 0;
}
