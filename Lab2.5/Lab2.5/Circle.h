#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

class Circle : public Figure {
private:
    double radius;

public:
    Circle();              
    Circle(double radius); 

    double getRadius() const;

    double getArea() const override;
    double getPerimeter() const override;
};

#endif
