#include <iostream>
#include <string>
#include "Calculator.h"
#include "Calculator.cpp"
int main() {
	//Create a class template for a calculator
  //it should have all the basic methods: add, subtract, multiply, divide
  //use exceptions to handle errors in special cases! (find the special cases!)
  try{
  Calculator<int> test;
  std::cout << test.add(7,62) << std::endl;
  std::cout << test.subtraction(24,45) << std::endl;
  std::cout << test.multiply(2,13) << std::endl;
  std::cout << test.devide(26,0) << std::endl;
  }
  catch(int x) {
    switch (x) {
      case 1:
        std::cout << "Can't devide by zero";
        break;
      case 2:
        std::cout << "Can't count with characters";
        break;
      case 3:
        std::cout << "Can't count with strings";
        break;
    }
  }
  return 0;
}
