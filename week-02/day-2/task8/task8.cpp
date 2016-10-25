#include <iostream>
#include <string>

using namespace std;

int main() {
  int h[] = {3, 4, 5, 6, 7} , sum;
	// print the sum of all numbers in h
  for(int i=0 ; i<=4 ; i++ ){
	  sum=h[i]+sum;

  }
  cout << sum;
  return 0;
}
