#include <iostream>

using namespace std;

struct Stack{
  int size=0;
  double* array;
};

Stack* stack_construct(double input[], int size);

void stack_push(Stack& stack, double value);

double stack_pop(Stack& stack);

bool is_emptyy(Stack& stack);

int main() {
  double test_array[3] = {1,2,3};
  Stack* new_stack = stack_construct(test_array,3);
  stack_push(*new_stack,8);
  cout << stack_pop(*new_stack) << endl;
  if(is_emptyy(*new_stack)){
    cout << "The stack is empty";
  }else {
    cout << "The stack is not empty";
  }
  delete[] new_stack->array;
  delete new_stack;
}

Stack* stack_construct(double input[], int size) {
  Stack* stack_1 = new Stack;
  stack_1->size=size;
  stack_1->array = new double[size];
  for(int i = 0; i < size; i++) {
    stack_1->array[i] = input[i];
  }
  return stack_1;
}

void stack_push(Stack& stack, double value) {
  double* new_array=new double[++stack.size];
  for (int i = 0; i < stack.size-1; i++) {
    new_array[i] = stack.array[i];
  }
  new_array[stack.size-1] = value;
  delete[] stack.array;
  stack.array = new_array;
}

double stack_pop(Stack& stack) {
  if ( stack.size == 0 ) {
    cout <<"The stack size is already 0, you can't pop";
  return 0;
  }
  double* new_array = new double[--stack.size];
  double result = stack.array[stack.size];
  for (int i = 0; i < stack.size-1; i++) {
    new_array[i] = stack.array[i];
  }
  delete[] stack.array;
  stack.array = new_array;
  return result;
}

bool is_emptyy(Stack& stack) {
  return stack.size<=0;
}
