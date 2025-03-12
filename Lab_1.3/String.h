#ifndef STRING_H
#define STRING_H

#include <string>

class StringClass {
private:
    std::string data;

public:
    StringClass();
    StringClass(const std::string& str);
    StringClass(const StringClass& other);

    ~StringClass();

    int getLength() const;

    StringClass operator+(const StringClass& other) const;
    StringClass operator*(int n) const;

    std::string getData() const;
};

#endif
