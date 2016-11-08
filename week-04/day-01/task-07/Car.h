/*
 * Car.h
 *
 *  Created on: 2016 nov. 8
 *      Author: Feri
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef CAR_H_
#define CAR_H_

class Car {
public:
  Car(string, int);

  void Run(int);

  int getKm();

  string getType();

  virtual ~Car();
private:
  string type;
  int km;
};

#endif /* CAR_H_ */
