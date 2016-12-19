/*
 * Fibonacci_test.cpp
 *
 *  Created on: 2016 dec. 19
 *      Author: Feri
 */

#define CATCH_CONFIG_MAIN
#include "test.h"
#include "Fibonacci.h"

TEST_CASE("Fibonacci") {
  Fibonacci fib_1;
  REQUIRE(fib_1.fibonacci(0) == 0);
  REQUIRE(fib_1.fibonacci(1) == 1);
  REQUIRE(fib_1.fibonacci(2) == 1);
  REQUIRE(fib_1.fibonacci(3) == 2);
  REQUIRE(fib_1.fibonacci(4) == 3);
  REQUIRE(fib_1.fibonacci(5) == 5);
}
TEST_CASE("Fibonacci negativ") {
  Fibonacci fib_1;
  CHECK_THROWS(fib_1.fibonacci(-4));
}
