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
            //Викликається автоматом конструктор за замовчуванням, бо ми нічо не передаєм 
        }
        else {
            std::istringstream iss(input);
            double a, b, c;
            if (!(iss >> a >> b >> c)) {
                throw std::invalid_argument("Неправильний формат вводу.");
            }
            calc = ExpressionCalculator(a, b, c); //Якзо введем хуйню, то виізе текст зверху, а якщо ні, то буде конструктор за параметром 
        }

        std::cout << "Результат: " << calc.Calculate() << std::endl;
    }
    catch (const std::exception& ex) { // catch -  оператор ловить ту помилку, якщо вона сталася, не дає програмі зламатися, і дозволяє вивести повідомлення.
        std::cerr << "Помилка: " << ex.what() << std::endl;
    }

    return 0;
}
