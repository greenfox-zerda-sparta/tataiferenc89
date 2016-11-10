/*
 * Triangle.h
 *
 *  Created on: 2016 nov. 9
 *      Author: Feri
 */
#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle : public Shape {

public:
  Triangle(double, double);
  virtual string getName();
  ~Triangle();

protected:
  virtual void calculateArea();
};

#endif /* TRIANGLE_H_ */
