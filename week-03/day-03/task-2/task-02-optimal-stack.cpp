
#include <iostream>
using namespace std;

struct Optimal_stack {
  int size;
  int array_length;
  double* array;
};
//-------PROTOTYPES-------

Optimal_stack* construct_o_stack(double input[], int size);

void o_stack_push(Optimal_stack& o_stack, double value);

double o_stack_pop(Optimal_stack& o_stack);

void print(Optimal_stack o_stack);

//----------MAIN----------

int main() {
  double test_array[7] = {1,2,3,4,5,6,7};
  Optimal_stack* test_optimal_stack = construct_o_stack(test_array,7);

  print(*test_optimal_stack);

  o_stack_push(*test_optimal_stack,81);
  o_stack_push(*test_optimal_stack,93);
  o_stack_push(*test_optimal_stack,101);
  o_stack_push(*test_optimal_stack,118);
  o_stack_push(*test_optimal_stack,12);
  o_stack_push(*test_optimal_stack,13);
  o_stack_push(*test_optimal_stack,81);

  print(*test_optimal_stack);

  cout << "The number you poped is: " << o_stack_pop(*test_optimal_stack) << endl;
  cout << "The number you poped is: " << o_stack_pop(*test_optimal_stack) << endl;
  cout << "The number you poped is: " << o_stack_pop(*test_optimal_stack) << endl;
  cout << "The number you poped is: " << o_stack_pop(*test_optimal_stack) << endl;

  print(*test_optimal_stack);

  delete[] test_optimal_stack->array;
  delete test_optimal_stack;

	return 0;
}
//--------FUNCTIONS--------

Optimal_stack* construct_o_stack(double input[], int size) {
  Optimal_stack*o_stack = new Optimal_stack;
  o_stack->size = size;
  o_stack->array_length = 16;
  while (o_stack->size > o_stack->array_length * 0.5) {
    o_stack->array_length*=2;
  }
  o_stack->array = new double[o_stack->array_length];
  for (int i = 0; i < o_stack->size; i++) {
    o_stack->array[i] = input[i];
  }
  return o_stack;
}

void o_stack_push(Optimal_stack& o_stack, double value){
  ++o_stack.size;
  if (o_stack.size > o_stack.array_length * 0.8) {
    o_stack.array_length *= 2;
    double* temp_array = new double[o_stack.array_length];
    for (int i = 0; i < o_stack.size; i++) {
      temp_array[i] = o_stack.array[i];
    }
    temp_array[o_stack.size-1] = value;
    delete[] o_stack.array;
    o_stack.array = temp_array;
  } else {
    o_stack.array[o_stack.size-1] = value;
  }
}

double o_stack_pop(Optimal_stack& o_stack) {
  if ( o_stack.size == 0 ) {
      cout <<"The stack size is already 0, you can't pop";
  return 0;
  }
  --o_stack.size;
  double result = o_stack.array[o_stack.size];
  return result;
}

void print(Optimal_stack o_stack) {
  cout << endl << "The length of the stack is: " << o_stack.array_length << endl;
  cout << "There are " << o_stack.size << " elements in the stack." << endl;
  cout << "List of the elements: ";
  for (int i = 0; i < o_stack.size; i++) {
    cout << o_stack.array[i] << " ";
  }
  cout << endl;
}
