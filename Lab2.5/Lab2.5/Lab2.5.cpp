#include <iostream>
#include <string>
#include <sstream>
#include "Square.h"
#include "Circle.h"
#include "Utils.h"

int main() {
    std::string input;
    Square sq;
    Circle cir;

    std::cout << "Введіть координати точки 1 (x1 y1): ";
    std::getline(std::cin, input);

    if (!input.empty()) {
        std::stringstream ss1(input);
        double x1, y1;
        ss1 >> x1 >> y1;

        std::cout << "Введіть координати точки 2 (x2 y2): ";
        std::getline(std::cin, input);

        std::stringstream ss2(input);
        double x2, y2;
        ss2 >> x2 >> y2;

        sq = Square(x1, y1, x2, y2);
    }

    std::cout << "Введіть радіус кола: ";
    std::getline(std::cin, input);

    if (!input.empty()) {
        std::stringstream ss(input);
        double r;
        ss >> r;
        cir = Circle(r);
    }

    std::cout << "\n--- Інформація про квадрат ---\n";
    showFigureInfo(&sq);

    std::cout << "\n--- Інформація про коло ---\n";
    showFigureInfo(&cir);

    return 0;
}
