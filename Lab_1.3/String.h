#ifndef STRING_H
#define STRING_H

#include <string>

class String {
private:
    std::string data;

public:
    String();
    String(const std::string& str);
    String(const String& other);

    int getLength() const;

    String operator+(const String & other) const;
    String operator*(int n) const;

    std::string getData() const;
};

#endif
