#ifndef LETTERSTRING_H
#define LETTERSTRING_H

#include "StringBase.h"

class LetterString : public StringBase {
public:
    LetterString();

    LetterString(const std::string& str);

    LetterString(const LetterString& other);

    void shiftLastChar();

    std::string getShiftedText() const;
};

#endif
