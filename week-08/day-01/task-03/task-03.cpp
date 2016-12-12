// Create a constant using preprocessor directives.
// Make it so, that depending on the existence of a defined variable
// it's value is different.
// Write a main function that writes it to the console.
// Experiment in Your IDE compiling it with the directive defined or not.
// (This is what we used -D __DEBUG for example. You can try this and see how it works
// when You compile a Debug version and a Release version.)

#include <iostream>
using namespace std;

#ifdef _LOG
  #define my_constant 100
#else
  #define my_constant 10
#endif

int main() {
	cout << my_constant << endl;
	return 0;
}
