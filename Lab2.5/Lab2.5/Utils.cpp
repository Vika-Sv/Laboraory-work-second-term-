#include "Utils.h"

void showFigureInfo(const Figure* fig) {
    std::cout << "Площа: " << fig->getArea() << std::endl;
    std::cout << "Периметр: " << fig->getPerimeter() << std::endl;
}
