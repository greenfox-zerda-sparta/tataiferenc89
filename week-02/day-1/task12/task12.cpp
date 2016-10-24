#include <iostream>
#include <string>

using namespace std;

int main() {
	string m = "Apple";
	//fill the m variable with its cotnent 4 times
	for (int i=1; i<=2; i++){
		m+=m;
	}
	cout << m;
	return 0;
}
