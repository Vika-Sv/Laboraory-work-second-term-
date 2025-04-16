#include "Circle.h"
#define _USE_MATH_DEFINES
#include <cmath>

Circle::Circle() : radius(1.0) {}

Circle::Circle(double radius) : radius(radius) {}

double Circle::getRadius() const { return radius; }

double Circle::getArea() const {
    return M_PI * radius * radius;
}

double Circle::getPerimeter() const {
    return 2 * M_PI * radius;
}
