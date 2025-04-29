#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w, string n = "Rectangle")
        : length(l), width(w) {
        setName(n);
        calcArea();
    }
     // override the calcArea function to calculate the area of a rectangle 
    void calcArea() override {
        double a = length * width;
        setArea(a);
    }
    //getters for length and width
    double getLength() const { return length; }
    double getWidth() const { return width; }
};

#endif