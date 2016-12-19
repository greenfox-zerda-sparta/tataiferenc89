/*
 * WordToolbox_test.cpp
 *
 *  Created on: 2016 dec. 19
 *      Author: Feri
 */
#define CATCH_CONFIG_MAIN
#include "test.h"
#include "WordToolbox.h"


TEST_CASE("Check constuctor") {
  WordToolbox w("Tarzan's toenails");
  REQUIRE(w.get_stringHeld() == "Tarzan's toenails");
}

TEST_CASE("Check character counter method for valid character") {
  WordToolbox w("Tarzan's toenails");
  REQUIRE(w.countHowMany('a') == 3);
}

TEST_CASE("Check character counter method for invalid character") {
  WordToolbox w("Tarzan's toenails");
  REQUIRE(w.countHowMany('x') == 0);
}

TEST_CASE("Check anagramm method with valid string") {
  WordToolbox w("folate");
  REQUIRE(w.isAnAnagramm("foe  tal") == 1);
}

TEST_CASE("Check anagramm method with invalid string") {
  WordToolbox w("folate");
  REQUIRE(w.isAnAnagramm("foetaal") == 0);
}
