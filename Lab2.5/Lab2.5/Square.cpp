#include "Square.h"

Square::Square() : side(1.0) {}

Square::Square(double s) : side(s) {}

double Square::getSide() const {
    return side;
}

double Square::getArea() const {
    return side * side;
}

double Square::getPerimeter() const {
    return 4 * side;
}
