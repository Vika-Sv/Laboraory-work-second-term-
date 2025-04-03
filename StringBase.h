#ifndef STRINGBASE_H
#define STRINGBASE_H

#include <string>

class StringBase {
protected:
    std::string text; 

public:
    StringBase();

    StringBase(const std::string& str);

    StringBase(const StringBase& other);

    int getLength() const;

    std::string getText() const;
};

#endif
