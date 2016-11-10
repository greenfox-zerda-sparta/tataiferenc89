/*
 * Square.h
 *
 *  Created on: 2016 nov. 9
 *      Author: Feri
 */

#ifndef SQUARE_H_
#define SQUARE_H_

class Square : public Shape{
public:
  Square(double,double);
  string getName();
  ~Square();
protected:
  virtual void calculateArea();
};

#endif /* SQUARE_H_ */
