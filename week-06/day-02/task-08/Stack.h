#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#include <string>

class Stack {
private:
  int array[5];
  int counter;
public:
  Stack();
  void stack_push(int);
  int stack_pop();
  std::string interpretException(int exception);
};

#endif /* STACK_H_ */
