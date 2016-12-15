#include <iostream>
#include <string>

using namespace std;

 int the_final_countdown(int n) {
   if (n == 0) {
     return 0;
   } else {
     cout << n << " ";
     return the_final_countdown(n-1);
   }

 }

int main() {
// write a recursive function
// that takes one parameter: n
// and counts down from n
  int n = 22;

the_final_countdown(n);
  return 0;
}
