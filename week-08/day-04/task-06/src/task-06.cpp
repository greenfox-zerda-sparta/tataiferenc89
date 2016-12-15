#include <iostream>
#include <string>

using namespace std;

int antler_counter(int n) {
  if (n == 0) {
    return 0;
  } else if (n % 2 == 0) {
    return 3 + antler_counter(n - 1);
  } else {
    return 2 + antler_counter(n - 1);
  }
}

int main() {
// We have reindeers standing in a line, numbered 1, 2, ... The odd reindeers
// (1, 3, ..) have the normal 2 antlers. The even reindeers (2, 4, ..) we'll say
// have 3 antlers, because they each have a raised branch (how funny they are, arent they?).
// Recursively return the number of "antlers" in the reindeer line 1, 2, ... n (without loops or
// multiplication).
  cout << antler_counter(8);
  return 0;
}
