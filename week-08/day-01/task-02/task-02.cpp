// Create a constant using a preprocessor directive.
// Print it out to the console.
// Undefine it. And then redefine it with a new value.
// Print it out again.


#include <iostream>
using namespace std;

#define apple 8

int main() {
  int a = apple;
	cout << a << endl;
#undef apple
#define apple 10
	int b = apple;
	cout << b << endl;
	return 0;
}
