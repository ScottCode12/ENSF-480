// square.h
// ENSF 480 - Lab 2 - Exercise B
// Authors: John Delsing and Dyson Davis

#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square: public Shape{
public:
    Square(double a, double b, double side, char* name);
    const double area() const;
    const double perimeter() const;
    const double getSideA() const;
    virtual void display();
protected:
    double side_a;
};
#endif
