#include "String.h"

StringClass::StringClass() : data("") {}

StringClass::StringClass(const std::string& str) : data(str) {}

StringClass::StringClass(const StringClass& other) : data(other.data) {}

StringClass::~StringClass() {}

int StringClass::getLength() const {
    return data.length();
}

StringClass StringClass::operator+(const StringClass& other) const {
    return StringClass(data + other.data);
}

StringClass StringClass::operator*(int n) const {
    std::string newData;
    for (char c : data) {
        newData += std::string(n, c);
    }
    return StringClass(newData);
}

std::string StringClass::getData() const {
    return data;
}
