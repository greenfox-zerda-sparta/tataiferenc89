/*
 * WordToolbox.cpp
 *
 *  Created on: 2016 dec. 19
 *      Author: Feri
 */

#include "WordToolbox.h"

WordToolbox::WordToolbox(std::string stringHeld) {
  this->stringHeld = stringHeld;
}

std::string WordToolbox::get_stringHeld() {
  return stringHeld;
}

void WordToolbox::set_stringHeld(std::string input) {
  stringHeld = input;
}

std::string WordToolbox::sortString(std::string stringToSort) {
  stringToSort.erase(remove_if(stringToSort.begin(), stringToSort.end(), isspace), stringToSort.end());
  sort(stringToSort.begin(),stringToSort.end());
  return stringToSort;
}
bool WordToolbox::isAnAnagramm(std::string stringToCheck) {
  return sortString(stringHeld) == sortString(stringToCheck);
}

int WordToolbox::countHowMany(char charToFind) {
  return std::count(stringHeld.begin(),stringHeld.end(), charToFind);
}
