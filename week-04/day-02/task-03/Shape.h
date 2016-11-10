/*
 * Shape.h
 *
 *  Created on: 2016 nov. 9
 *      Author: Feri
 */
#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {
public:
  Shape(double,double);
  void setWidth(double);
  void setHeight(double);
  double getWidth();
  double getHeight();
  double getmArea();
  virtual string getName()=0;

  virtual ~Shape();
protected:
  virtual void calculateArea()=0;
  double mArea;

private:
  double mWidth;
  double mHeight;
};

#endif /* SHAPE_H_ */
