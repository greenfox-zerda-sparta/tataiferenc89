#include <iostream>
#include <string>

using namespace std;

int bunny_ear_counter(int n) {
  if (n == 0) {
    return 0;
  } else {
    return 2 + bunny_ear_counter(n-1);
  }
}

int main() {
// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies
// recursively (without loops or multiplication).
  cout << bunny_ear_counter(8);
return 0;
}
