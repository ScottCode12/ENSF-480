// circle.h
// ENSF 480 - Lab 3 - Exercise A
// Authors: John Delsing and Dyson Davis

#ifndef CIRCLE_H
#define CIRCLE_H

#include "square.h"

class Circle : public Square{
public:
    Circle(double a, double b, double r, char* name);
    double area();
    double perimeter();
    const double getRadius() const;
    void setRadius(double r);
    void display();
private:
    double radius;
};
#endif
