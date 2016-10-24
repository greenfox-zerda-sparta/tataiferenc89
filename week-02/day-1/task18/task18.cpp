#include <iostream>
#include <string>

using namespace std;

int main() {
	string x = "monkey";
	if(x.length()>4){
		cout << "Long";
	}else {
		cout << "Short";
	}
	/*# if the string is longer than 4 characters***
	# print 'Long!' otherwise print 'Short!'*/
	return 0;
}
