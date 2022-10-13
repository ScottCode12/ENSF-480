// curvecut.cpp
// ENSF 480 - Lab 2 - Exercise A
// Authors: John Delsing and Dyson Davis

#include "curvecut"
#include <iostream>
#include <cmath>
using namespace std;

CurveCut::CurveCut(): Rectangle(double a, double b, double sideA, double sideB, char* name), Shape(a, b, name), Circle(a, b, r, name){
    if(r > sideA && r > sideB){
        exit(1);
    }
}
const double CurveCut::getSideA() const{
    return Rectangle::getSideA();
}
const double CurveCut::getSideB() const{
    return Rectangle::getSideB();
}
const double CurveCut::getRadius() const{
    return Circle::getRadius();
}
double CurveCut::area(){
    double recA = Rectangle::area();
    double cirA = Circle::area();
    return recA - (cirA/4);
}
double CurveCut::perimeter(){
    double recP = Rectangle::perimeter();
        double cirP = Circle::perimeter();
        double cirR = Circle::getRadius();
        return recP - (2 * cirR) + (cirP/4);
}
void CurveCut::display(){
    cout << "\nCurveCut Name: " << Shape::getName() << "\n"
             << "X-coordinate: " << Shape::origin.get_x() << "\n"
             << "Y-coordinate: " << Shape::origin.get_y() << "\n"
             << "Width: " << Rectangle::getSideA() << "\n"
             << "Length: " << Rectangle::getSideB() << "\n"
             << "Radius of the cut: " << Circle::get_radius() << "\n";
}
