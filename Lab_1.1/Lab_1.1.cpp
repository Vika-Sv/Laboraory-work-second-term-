#include <windows.h>
#include "Segment_1.h"
#include <iostream>


int main() {
    SetConsoleOutputCP(1251);

    double x1 = 1, y1 = 2, z1 = 3;
    double x2 = 4, y2 = 6, z2 = 8;

    Segment segment(x1, y1, z1, x2, y2, z2);

    std::cout << "Довжина відрізка: " << segment.getLength() << std::endl;
    std::cout << "Кут з віссю OY: " << segment.getAngleOY() << " градусів" << std::endl;

    return 0;
}