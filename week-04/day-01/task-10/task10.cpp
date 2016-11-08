#include <iostream>
#include <string>

using namespace std;
#include "Stack.h"

int main() {
  Stack stack_1;
  stack_1.push(8);
  stack_1.push(13);
  stack_1.push(29);
  stack_1.push(98);
  cout << stack_1.size_of_stack() << endl;
  cout << stack_1.pop();
    // Create a `Stack` class that stores elements
    // It should have a `size` method that returns number of elements it has
    // It should have a `push` method that adds an element to the stack
    // It should have a `pop` method that returns the last element form the stack and also deletes it from it

  return 0;
}
