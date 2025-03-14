#include "String.h"

String::String() : data("") {}

String::String(const std::string& str) : data(str) {}

String::String(const String& other) : data(other.data) {}

String::~String() {}

int String::getLength() const {
    return data.length();
}

String String::operator+(const String& other) const {
    return String(data + other.data);
}

String String::operator*(int n) const {
    std::string newData;
    for (char c : data) {
        newData += std::string(n, c);
    }
    return String(newData);
}

std::string String::getData() const {
    return data;
}
