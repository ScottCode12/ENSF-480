// curvecut.h
// ENSF 480 - Lab 3 - Exercise A
// Authors: John Delsing and Dyson Davis

#ifndef CURVECUT_H
#define CURVECUT_H

#include "rectangle.h"
#include "circle.h"
#include "shape.h"

class CurveCut : public Rectangle, public Circle, public Shape{
public:
    CurveCut(double a, double b, double sideA, double sideB, double r, char* name);
    const double getSideA() const;
    const double getSideB() const;
    const double getRadius() const;
    double area();
    double perimeter();
    void display();
};
#endif

