// Define a function like macro that prints out the parameter it gets,
// and adds this string before it "DEBUG: " if __DEBUG is defined.
// Otherwise adds "RELEASE: " before the string.
// Use try it out. Illustrate that it works.
#include <iostream>
using namespace std;

//#ifndef _LOG
#ifdef _LOG
#define str(a) {cout << "DEBUG: " << #a;}
#else
#define str(a) {cout << "RELEASE: " << #a;}
#endif

int main() {
	str(12 egy tucat);
	return 0;
}
