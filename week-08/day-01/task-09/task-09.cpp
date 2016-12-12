// Create a function like macro. The Macro should take one parameter and
// print out the parameter to the console after printing out in which file
// and at which line it has been called at.

#include <iostream>
using namespace std;

#define print_out(a) {cout << "The parameter is: " << #a << " at line: " << __LINE__ << " and in this file: " << __FILE__ << endl;}

int main() {
  int a = 12;
	print_out(a < 10);

	return 0;
}
