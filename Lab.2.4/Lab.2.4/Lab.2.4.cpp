#include <iostream>
#include <windows.h>
#include <sstream>
#include "ExpressionCalculator.h"

int main() {
    SetConsoleOutputCP(1251);

    try {
        std::cout << "Введіть значення a, b, c через пробіл: ";

        std::string input;
        std::getline(std::cin, input);

        ExpressionCalculator calc;

        if (input.empty()) { 
        }
        else {
            std::istringstream iss(input);
            double a, b, c;
            if (!(iss >> a >> b >> c)) {
                throw std::invalid_argument("Неправильний формат вводу.");
            }
            calc = ExpressionCalculator(a, b, c);  
        }

        std::cout << "Результат: " << calc.Calculate() << std::endl;
    }
    catch (const std::exception& ex) { 
        std::cerr << "Помилка: " << ex.what() << std::endl;
    }

    return 0;
}
