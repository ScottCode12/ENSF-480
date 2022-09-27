

#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape{
public:
    Shape(double a, double b, char* name);
    ~Shape();
    const Point& getOrigin() const;
    const char* getName() const;
    virtual void display();
    double distance(Shape& other);
    static double distance (Shape& the_shape, Shape& other);
    void move (double dx, double dy);
protected:
    Point origin;
    char* shapeName;
};
#endif
