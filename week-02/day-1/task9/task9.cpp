#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	unsigned long i =1357988018575474;
	// tell if it has 11 as a divisor
	if (i%11==0) {
		cout << "11 is a divisor";
	}else {
		cout << "11 is not a divisor, the reminder is =" << i%11 ;
	}
	return 0;
}
