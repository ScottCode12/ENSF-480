// Circle.cpp
// ENSF 480 - Lab 2 - Exercise A
// Authors: John Delsing and Dyson Davis

#include "circle.h"
#include <iostream>
#include <cmath>
using namespace std;

Circle::Circle(double a, double b, double r, char* name): Square(a, b, name){
    radius = r;
}

const double Circle::area() const{
    return (M_PI * (getRadius()) * (getRadius()));
}
const double Circle::perimeter() const{
    return (2 * (getRadius()) * M_PI);
}
const double Circle::getRadius() const{
    return radius;
}
void Circle::setRadius(double r){
    radius = r;
}
void Circle::display(){
    cout << "Shape Name: " << Shape::getName();
    cout << "X-coordinate: %f" << Shape::origin.get_x();
    cout << "Y-coordinate: %f" << Shape::origin.get_y();
    cout << "Radius: %f" << getRadius();
    cout << "Area: %f " << area();
    cout << "Perimeter: %f" << perimeter();
}
