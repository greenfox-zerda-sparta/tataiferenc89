#include <iostream>
#include <string>

using namespace std;
int sumarray(int array[],int length) {
	int sum=0;
	for(int i=0;i<=length-1 ; i++ ){
		sum=array[i]+sum;
	}
	cout <<"The sum of your array is : "<< sum << endl << "Your length of your array is : " << length;
return sum;
}

int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10},length;
  length=sizeof(numbers)/sizeof(int);
  sumarray(numbers,length);
  // write your own sum function
  // it should take an array and it's length
  return 0;
}
