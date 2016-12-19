/*
 * Apple_test.cpp

 *
 *  Created on: 2016 dec. 19
 *      Author: Feri
 */
#define CATCH_CONFIG_MAIN
#include "test.h"
#include "Apple.h"


TEST_CASE("Apple"){
  Apple apple_1;
  REQUIRE(apple_1.get_apple() == "apple");
}
