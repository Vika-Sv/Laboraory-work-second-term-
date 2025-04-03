#include "LetterString.h"

LetterString::LetterString() : StringBase() {}

LetterString::LetterString(const std::string& str) : StringBase(str) {}

LetterString::LetterString(const LetterString& other) : StringBase(other) {}

void LetterString::shiftLastChar() {
    if (text.length() > 1) {
        char lastChar = text.back();  
        text.pop_back();              
        text = lastChar + text;       
    }
}

std::string LetterString::getShiftedText() const {
    return text;
}
