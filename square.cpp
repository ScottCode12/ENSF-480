// square.cpp
// ENSF 480 - Lab 2 - Exercise B
// Authors: John Delsing and Dyson Davis

#include "square.h"
#include <iostream>
#include <cmath>
using namespace std;

Square::Square(double a, double b, double side, char* name): Shape(a, b, name){
    side_a = side;
}
const double Square::area() const{
    return pow(this->getSideA(), 2.0);
}
const double Square::perimeter() const{
    return (4.0) * (this->getSideA());
    
}
const double Square::getSideA() const{
    return this->side_a;
}
void Square::display(){
    cout << "Shape Name: ";
    cout << "X-coordinate: ";
    cout << "Y-coordinate: ";
    cout << "Side a: ";
    cout << "Area: ";
    cout << "Perimeter: ";
}
