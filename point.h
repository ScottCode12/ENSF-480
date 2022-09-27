// point.h
// ENSF 480 - Lab 2 - Exercise B
// Authors: John Delsing and Dyson Davis

#ifndef POINT_H
#define POINT_H

class Point{
public:
    Point(const int a, const int b);
    void display();
    const double get_x() const;
    const double get_y() const;
    const int get_idnumber() const;
    void setx(const double a);
    void sety(const double b);
    const int counter() const;
    const double distance(Point& a);
    static const double distance(Point& a, Point& b);
private:
    double x;
    double y;
    int idnumber;
    static int count;
};
#endif
