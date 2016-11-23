#include <iostream>
#include <string>

using namespace std;
template <class first, class second>
void decide(first a, second b){
  sizeof(first) > sizeof(second) ? cout << a <<" type takes more byte" :cout << b <<" type takes more byte";
}
int main() {
  //Create a function template that takes 2 different typenames, and prints out
  //which one is stored in more bytes from then
  int b= 65;
  double a= 4;
  decide(a,b);
  return 0;
}
