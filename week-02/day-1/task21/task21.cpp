#include <iostream>
#include <string>

using namespace std;

int main() {
	int ab = 123;
	int credits = 140;
	bool is_bonus = 1;
	// if credits are at least 50,
	// and is_bonus is False decrement ab by 2
	// if credits are smaller than 50,
	// and is_bonus is False decrement ab by 1
	// if is_bonus is True ab should remain the same
	if (credits >=50 && is_bonus==1){
		ab=ab-2;
		cout<<ab;
	}else if (credits <50 && is_bonus==1){
		ab=ab-1;
		cout<<ab;
	}else if (is_bonus==0){
		cout<<ab;
	}
	return 0;

}
