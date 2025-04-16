#ifndef SQUARE_H
#define SQUARE_H

#include "Figure.h"

class Square : public Figure {
private:
    double side;

public:
    Square();                
    Square(double s);        

    double getSide() const;

    double getArea() const override;
    double getPerimeter() const override;
};

#endif
