#include <iostream>
#include <windows.h>
#include "String.h"

int main() {
    SetConsoleOutputCP(1251);

    std::string input;
    std::cout << "Введіть слово: ";
    std::getline(std::cin, input);

    String CB2;
    if (input.empty()) {
        CB2 = String("Hello");
    }
    else {
        CB2 = String(input);
    }
    String CB3(CB2);

    CB3 = CB3 * 2;
    String CB1 = CB2 + CB3;

    std::cout << "CB1: " << CB1.getData() << " (Довжина: " << CB1.getLength() << ")\n";
    std::cout << "CB2: " << CB2.getData() << " (Довжина: " << CB2.getLength() << ")\n";
    std::cout << "CB3: " << CB3.getData() << " (Довжина: " << CB3.getLength() << ")\n";

    return 0;
}
