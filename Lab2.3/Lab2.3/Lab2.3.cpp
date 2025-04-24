#include <iostream>
#include <windows.h>
#include "TextContainer.h"

void showMenu() {
    std::cout << "\n=== МЕНЮ ===\n";
    std::cout << "1. Додати рядок\n";
    std::cout << "2. Показати всі рядки\n";
    std::cout << "3. Видалити рядок\n";
    std::cout << "4. Замінити рядок\n";
    std::cout << "5. Порахувати загальну кількість цифр\n";
    std::cout << "6. Очистити всі рядки\n";
    std::cout << "0. Вихід\n";
    std::cout << "Ваш вибір: ";
}

int main() {
    SetConsoleOutputCP(1251);
    TextContainer container;
    int choice;

    do {
        showMenu();
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::string text;
            std::cout << "Введіть новий рядок: ";
            std::getline(std::cin, text);
            container.addRow(TextRow(text));
        }
        else if (choice == 2) {
            std::cout << "\n--- Всі рядки ---\n";
            for (int i = 0; i < container.getRowCount(); ++i)
                std::cout << i + 1 << ": " << container.getRow(i).getText() << "\n";
        }
        else if (choice == 3) {
            int index;
            std::cout << "Номер рядка для видалення: ";
            std::cin >> index;
            container.removeRow(index - 1);
        }
        else if (choice == 4) {
            int index;
            std::string newText;
            std::cout << "Номер рядка для заміни: ";
            std::cin >> index;
            std::cin.ignore();
            std::cout << "Новий текст: ";
            std::getline(std::cin, newText);
            container.replaceRow(index - 1, TextRow(newText));
        }
        else if (choice == 5) {
            std::cout << "Загальна кількість цифр: " << container.totalDigits() << "\n";
        }
        else if (choice == 6) {
            container.clear();
            std::cout << "Очищено всі рядки.\n";
        }
    } while (choice != 0);

    return 0;
}
