// Create a function like macro.
// It's job is to turn something written in code into a string.
// It should be called str(a).
// Try out the code below. See what happens!

#include <iostream>
using namespace std;

#define str(a) #a

int main() {
  int a = 28;
  int b = 24;
  if(a > b) {
   cout<< str(a > b) << "  a: " << a << "  b: " << b << endl;
  }
  return 0;
}
