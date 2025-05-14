#ifndef EXPRESSIONCALCULATOR_H
#define EXPRESSIONCALCULATOR_H

class ExpressionCalculator {
private:
    double a, b, c;
    double SafeLog(double value);

public:
    ExpressionCalculator(); 
    ExpressionCalculator(double a, double b, double c); 

    double Calculate();

    double getA() const;
    double getB() const;
    double getC() const;
};

#endif
