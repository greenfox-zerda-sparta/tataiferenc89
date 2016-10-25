#include <iostream>
#include <string>

using namespace std;
void dbl(int j){
	j=j*2;
	cout<<j;
}
int main() {
  int j = 123;
  // create a function that doubles it's input
  // double j with it
  dbl(j);
  return 0;
}
