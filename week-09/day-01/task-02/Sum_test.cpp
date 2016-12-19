/*
 * Sum_test.cpp
 *
 *  Created on: 2016 dec. 19
 *      Author: Feri
 */
#define CATCH_CONFIG_MAIN
#include "test.h"
#include "Sum.h"


TEST_CASE("Test sum") {
  std::vector<int> numbers = {1,2,3,4,5};
  Sum test_1;
  int sum_of_test = test_1.sum_of_numbers(numbers);
  REQUIRE(sum_of_test == 15);
}
TEST_CASE("Test empty list") {
  std::vector<int> numbers;
  Sum test_1;
  int sum_of_test = test_1.sum_of_numbers(numbers);
  REQUIRE(sum_of_test == 0);
}
TEST_CASE("Test one element") {
  std::vector<int> numbers = {1};
  Sum test_1;
  int sum_of_test = test_1.sum_of_numbers(numbers);
  REQUIRE(sum_of_test == 1);
}
TEST_CASE("Test multiple elements") {
  std::vector<int> numbers = {2*2,4*4};
  Sum test_1;
  int sum_of_test = test_1.sum_of_numbers(numbers);
  REQUIRE(sum_of_test == 20);
}
