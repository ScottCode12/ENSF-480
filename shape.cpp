

#include "shape.h"
#include <iostream>
using namespace std;

Shape::Shape(double a, double b, char* name): origin(a, b){
    shapeName = name;
}
Shape::~Shape(){
    
}
const Point& Shape::getOrigin() const{
    return origin;
}
const char* Shape::getName() const{
    return shapeName;
}
void Shape::display(){
    cout << "Shape Name: " << this->getName();
    cout << "X-coordinate: %f" << this->getOrigin().get_x();
    cout << "Y-coordinate: %f" << this->getOrigin().get_y();
}
double Shape::distance(Shape& other){
    return 0;
}
double Shape::distance (Shape& the_shape, Shape& other){
    return 0;
}
void Shape::move(double dx, double dy){
    
}
