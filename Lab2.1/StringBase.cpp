#include "StringBase.h"

StringBase::StringBase() : text("Hello") {}

StringBase::StringBase(const std::string& str) : text(str) {}

StringBase::StringBase(const StringBase& other) : text(other.text) {}

int StringBase::getLength() const {
    return text.length();
}

std::string StringBase::getText() const {
    return text;
}
