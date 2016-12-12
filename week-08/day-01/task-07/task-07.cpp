// Create a function like macro, that get's one parameter.
// This macro should print out that paramter using cout.
// Illustrate that it works in Your main function.
#include <iostream>
using namespace std;

#define print_out(a) {cout << a << endl;}

int main() {
  int a = 12;
  string b = "kelkaposzta";
  print_out(a);
  print_out(b);
	return 0;
}
