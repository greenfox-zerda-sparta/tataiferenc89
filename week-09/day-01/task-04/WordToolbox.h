/*
 * WordToolbox.h
 *
 *  Created on: 2016 dec. 19
 *      Author: Feri
 */

#ifndef WORDTOOLBOX_H_
#define WORDTOOLBOX_H_

#include <iostream>
#include <algorithm>

class WordToolbox {
private:
  std::string stringHeld;
public:
  WordToolbox(std::string);
  std::string get_stringHeld();
  void set_stringHeld(std::string);
  bool isAnAnagramm(std::string);
  int countHowMany(char);
  std::string sortString(std::string);
};

#endif /* WORDTOOLBOX_H_ */
