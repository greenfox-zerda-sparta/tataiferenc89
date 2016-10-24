
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	int j2squared=pow(j2,2);
	if (j2squared<j1){
		cout << "J2 squared is = " << j2squared << " so it is smaller than j1" << endl;
	}
	float j2cubed=pow(j2,3);
	if (j2cubed>j1){
			cout << "J2 cubed is =" << j2cubed << " so it is higher than j1" ;
		}
	return 0;
}
