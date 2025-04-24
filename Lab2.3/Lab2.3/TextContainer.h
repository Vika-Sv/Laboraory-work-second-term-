#ifndef TEXTCONTAINER_H
#define TEXTCONTAINER_H

#include "TextRow.h"
#include <vector>

class TextContainer {
private:
    std::vector<TextRow> rows;

public:
    void addRow(const TextRow& row);
    void removeRow(int index);
    void replaceRow(int index, const TextRow& row);
    void clear();
    int getRowCount() const;
    int totalDigits() const;
    TextRow getRow(int index) const;
};

#endif
