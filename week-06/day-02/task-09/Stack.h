#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#include <string>
enum status {full,empty};
class Stack {
private:
  int array[5];
  int counter;
public:
  Stack();
  void stack_push(int);
  int stack_pop();
  std::string interpretException(status exception);
};

#endif /* STACK_H_ */
