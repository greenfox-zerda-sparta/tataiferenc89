#include <iostream>
using namespace std;

int checkprime(int number){
	if(number==2 || number==3 || number==5 || number==7){
		cout << "True, its a prime number.";
	}
	else if(number%2!=0 && number%3!=0 && number%5!=0 && number%7!=0){
		cout << "True, its a prime number.";
	}
	else{
		cout << "False, its not a prime number";
	}
		return 0;
}
int main(){
  int number = 3;
  // create a function that decides if a number is a prime number.
  // It should take a number as an argument and return true if it is prime and
  // false otherwise.
  checkprime(number);
	return 0;
}
