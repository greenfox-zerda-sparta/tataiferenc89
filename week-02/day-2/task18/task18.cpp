#include <iostream>
using namespace std;

int evenarray(int array[],int length){
	int num=0;
	for (int i=0;i<length; i++){
		if(array[i]%2==0){
			num++;
		}
	}
	cout << num;
	return 0;
}
int main(){
  int numbers[] = {4, 5, 6, 2, 3, 8, 6, 5} ,length;
  length=sizeof(numbers)/sizeof(int);
  // create a function that takes an array and it's length as an agrument
  // and returns a number that states how many even numbers are in the array
  evenarray(numbers,length);
	return 0;
}
