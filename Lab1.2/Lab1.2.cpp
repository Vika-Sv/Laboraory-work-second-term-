#include <iostream>
#include <windows.h>
#include "Segment.h"



int main() {
    SetConsoleOutputCP(1251);

    Segment seg1; 
    Segment seg2(seg1); 

    std::cout << "Сегмент 1 (за замовчуванням):\n";
    std::cout << "Довжина: " << seg1.getLength() << ", Кут з OY: " << seg1.getAngleOY() << " градусів\n\n";

    std::cout << "Сегмент 2 (копія сегмента 1):\n";
    std::cout << "Довжина: " << seg2.getLength() << ", Кут з OY: " << seg2.getAngleOY() << " градусів\n";

    return 0;
}