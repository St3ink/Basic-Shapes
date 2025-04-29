#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

int main() {
    const int SIZE = 5;
    BasicShape* shapes[SIZE];

    // Fill the array
    shapes[0] = new Rectangle(4.0, 5.0, "Rectangle1");
    shapes[1] = new Rectangle(6.0, 2.5, "Rectangle2");
    shapes[2] = new Circle(0.0, 0.0, 3.0, "Circle1");
    shapes[3] = new Circle(1.5, 2.5, 4.5, "Circle2");
    shapes[4] = new Square(5.0, "Square1");

    // Display info
    for (int i = 0; i < SIZE; i++) {
        cout << shapes[i]->getName() << " Area: " << shapes[i]->getArea() << endl;
    }

    // Free memory
    for (int i = 0; i < SIZE; i++) {
        delete shapes[i];
    }

    return 0;
}