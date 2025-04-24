#ifndef TEXTROW_H
#define TEXTROW_H

#include "INumberAnalysis.h"
#include <string>

class TextRow : public INumberAnalysis {
private:
    std::string text;

public:
    TextRow();
    TextRow(const std::string& str);

    std::string getText() const;
    void setText(const std::string& str);
    int countDigits() const override;
};

#endif
