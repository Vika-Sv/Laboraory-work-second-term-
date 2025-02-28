#include <iostream>
#include <windows.h>
#include "Segment.h"

int main() {
    SetConsoleOutputCP(1251);

    double x1, y1, z1, x2, y2, z2;

    std::cout << "Введіть x1, y1, z1: ";

    if (!(std::cin >> x1 >> y1 >> z1)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        Segment segment;
        std::cout << "Довжина: " << segment.getLength() << ", Кут з OY: " << segment.getAngleOY() << " градусів\n";
        return 0;
    }
    
    std::cout << "Введіть x2, y2, z2: ";
    if (!(std::cin >> x2 >> y2 >> z2)) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        Segment segment;
        std::cout << "Довжина: " << segment.getLength() << ", Кут з OY: " << segment.getAngleOY() << " градусів\n";
        return 0;
    }
    
    Segment segment(x1, y1, z1, x2, y2, z2);
    std::cout << "Довжина: " << segment.getLength() << ", Кут з OY: " << segment.getAngleOY() << " градусів\n";

    return 0;
}
