#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>
using namespace std;

class BasicShape {
private:
    double area;
    string name;

public:
    BasicShape() : area(0.0), name("") {}

    //setters for area and name
    void setArea(double a) { area = a; }
    void setName(const string& n) { name = n; }

    //getters for area and name
    double getArea() const { return area; }
    string getName() const { return name; }

    // pure virtual function to calculate area
    virtual void calcArea() = 0; 

    // virtual destructor to ensure proper cleanup of derived objects
    virtual ~BasicShape() {}
};

#endif