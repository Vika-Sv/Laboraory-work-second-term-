#include "Utils.h"

void showFigureInfo(const Figure* fig) {
    std::cout << "�����: " << fig->getArea() << std::endl;
    std::cout << "��������: " << fig->getPerimeter() << std::endl;
}
