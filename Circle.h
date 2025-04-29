#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"
#include <cmath>

class Circle : public BasicShape {
private:
    double xCenter;
    double yCenter;
    double radius;

public:
    Circle(double x, double y, double r, string n = "Circle")
        : xCenter(x), yCenter(y), radius(r) {
        setName(n);
        calcArea();
    }

    // override the calcArea function to calculate the area of a circle
    void calcArea() override {
        double a = 3.14159 * radius * radius;
        setArea(a);
    }

    //getters for the circle's properties
    double getXCenter() const { return xCenter; }
    double getYCenter() const { return yCenter; }
    double getRadius() const { return radius; }
};

#endif