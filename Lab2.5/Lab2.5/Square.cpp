#include "Square.h"
#include <cmath>

Square::Square() : x1(0), y1(0), x2(1), y2(1) {}

Square::Square(double x1, double y1, double x2, double y2)
    : x1(x1), y1(y1), x2(x2), y2(y2) {
}

double Square::getSide() const {
    return std::abs(x2 - x1); 
}

double Square::getArea() const {
    double side = getSide();
    return side * side;
}

double Square::getPerimeter() const {
    return 4 * getSide();
}

double Square::getX1() const { return x1; }
double Square::getY1() const { return y1; }
double Square::getX2() const { return x2; }
double Square::getY2() const { return y2; }
