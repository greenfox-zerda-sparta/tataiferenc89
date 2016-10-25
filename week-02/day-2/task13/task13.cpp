
#include <iostream>
#include <string>

using namespace std;
int factorial(int x) {
	if (x==0){
		return 1;
	}else{
		return x * factorial(x-1);
	}
}
int main() {
  // create a function that returns it's input factorial
	cout << factorial(5);
  return 0;
}
