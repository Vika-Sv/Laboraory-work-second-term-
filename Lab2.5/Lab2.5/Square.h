#ifndef SQUARE_H
#define SQUARE_H

#include "Figure.h"

class Square : public Figure {
private:
    double x1, y1;
    double x2, y2;

public:
    Square(); 
    Square(double x1, double y1, double x2, double y2); 

    double getSide() const;

    double getArea() const override;
    double getPerimeter() const override;

    double getX1() const;
    double getY1() const;
    double getX2() const;
    double getY2() const;
};

#endif
