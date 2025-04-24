#include "TextRow.h"
#include <cctype>

TextRow::TextRow() : text("default") {}

TextRow::TextRow(const std::string& str) : text(str) {}

std::string TextRow::getText() const {
    return text;
}

void TextRow::setText(const std::string& str) {
    text = str;
}

int TextRow::countDigits() const {
    int count = 0;
    for (char c : text) {
        if (std::isdigit(static_cast<unsigned char>(c)))
            count++;
    }
    return count;
}
