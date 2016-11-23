#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

// Duplicate the Stack class from the previous exercies.
// Rewrite it so, that the push and pop methods don't throw integers.
// Define an enum for te two types of exceptions.
// Adapt the interpretException method to except an argument from that enum type.
// Adapt the main function so that the try and catch blocks except an exception of that enum type.

int main () {
  Stack example;
  try {
    example.stack_push(12);
    example.stack_push(12);
    cout << example.stack_pop() << endl;
    cout << example.stack_pop() << endl;
    example.stack_push(12);
    example.stack_push(12);
    example.stack_push(12);
    example.stack_push(12);
    example.stack_push(12);
    example.stack_push(12);
  }
  catch(status &x) {
    cout << example.interpretException(x);
  }
  return 0;
}
