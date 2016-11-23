#ifndef CALCULATOR_H_
#define CALCULATOR_H_
#include <string>
template <class T>
class Calculator {
private:
  T number_1;
  T number_2;
public:
  void set_number_1(T a);
  void set_number_2(T a);
  T add(T a, T b);
  T subtraction (T a, T b);
  T multiply(T a, T b);
  T devide(T a, T b);
};
template<>
class Calculator<char>{
public:
  Calculator() {
    throw 2;
  }
};
template<>
class Calculator<std::string>{
public:
  Calculator() {
    throw 3;
  }
};
#endif /* CALCULATOR_H_ */
