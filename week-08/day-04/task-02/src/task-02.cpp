#include <iostream>
#include <string>

using namespace std;

int add_till_n(int n) {
  if (n == 0)
    return 0;
  else {
    return n + add_till_n(n-1);
  }
}

int main() {
// write a recursive function
// that takes one parameter: n
// and adds numbers from 1 to n
cout << add_till_n(8);
  return 0;
}
