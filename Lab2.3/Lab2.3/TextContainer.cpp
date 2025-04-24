#include "TextContainer.h"

void TextContainer::addRow(const TextRow& row) {
    rows.push_back(row);
}

void TextContainer::removeRow(int index) {
    if (index >= 0 && index < rows.size())
        rows.erase(rows.begin() + index);
}

void TextContainer::replaceRow(int index, const TextRow& row) {
    if (index >= 0 && index < rows.size())
        rows[index] = row;
}

void TextContainer::clear() {
    rows.clear();
}

int TextContainer::getRowCount() const {
    return rows.size();
}

int TextContainer::totalDigits() const {
    int total = 0;
    for (const auto& row : rows)
        total += row.countDigits();
    return total;
}

TextRow TextContainer::getRow(int index) const {
    return (index >= 0 && index < rows.size()) ? rows[index] : TextRow();
}
