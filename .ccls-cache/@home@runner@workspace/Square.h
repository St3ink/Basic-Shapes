#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
private:
    double side;

public:
    Square(double s, string n = "Square")
        : Rectangle(s, s, n), side(s) {
        setName(n); // Set in BasicShape
    }
    // No need to override calcArea as it's already handled by Rectangle

    //getter for side
    double getSide() const { return side; }
};

#endif