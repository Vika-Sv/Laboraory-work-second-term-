#ifndef INUMBERANALYSIS_H
#define INUMBERANALYSIS_H

class INumberAnalysis {
public:
    virtual int countDigits() const = 0;
    virtual ~INumberAnalysis() {}
};

#endif
