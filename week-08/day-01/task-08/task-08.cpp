// Create a function like macro, that gets an expression as it's input.
// If the expression is false, it should print out some error message.
#include <iostream>
using namespace std;

#define function(a) {a ? cout << #a : cout << "error";}

int main() {
	int a = 8;
	int b = 10;
	function(a > b);
	return 0;
}
