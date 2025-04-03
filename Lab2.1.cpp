#include <iostream>
#include <windows.h>
#include "LetterString.h"

int main() {
    SetConsoleOutputCP(1251);
    std::string userInput;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, userInput);

    LetterString myString = userInput.empty() ? LetterString() : LetterString(userInput);

    std::cout << "Введений рядок: " << myString.getText() << "\n";
    std::cout << "Довжина: " << myString.getLength() << "\n";

    myString.shiftLastChar();
    std::cout << "Рядок після зміни останньої букви: " << myString.getShiftedText() << "\n";

    return 0;
}
