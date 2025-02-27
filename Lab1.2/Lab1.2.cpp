#include <iostream>
#include <windows.h>
#include "Segment.h"

int main() {
    SetConsoleOutputCP(1251);

    double x1, y1, z1, x2, y2, z2;

   
    std::cout << "Введіть координати початкової точки (x1, y1, z1): ";
    std::cin >> x1 >> y1 >> z1;

    std::cout << "Введіть координати кінцевої точки (x2, y2, z2): ";
    std::cin >> x2 >> y2 >> z2;

    
    Segment userSegment(x1, y1, z1, x2, y2, z2);
    Segment seg1;
    Segment seg2(seg1);

    std::cout << "Довжина відрізка: " << userSegment.getLength() << ", Кут з віссю OY: " << userSegment.getAngleOY() << " градусів\n";

    std::cout << "Сегмент 1:\n";
    std::cout << "Довжина: " << seg1.getLength() << ", Кут з OY: " << seg1.getAngleOY() << " градусів\n\n";

    std::cout << "Сегмент 2 (копія сегмента 1):\n";
    std::cout << "Довжина: " << seg2.getLength() << ", Кут з OY: " << seg2.getAngleOY() << " градусів\n";

    return 0;
}
