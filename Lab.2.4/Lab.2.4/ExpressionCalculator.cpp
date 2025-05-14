#include "ExpressionCalculator.h"
#include <cmath>
#include <stdexcept>

ExpressionCalculator::ExpressionCalculator() : a(1), b(2), c(3) {} 

ExpressionCalculator::ExpressionCalculator(double a, double b, double c) 
    : a(a), b(b), c(c) {
}

double ExpressionCalculator::getA() const { return a; }
double ExpressionCalculator::getB() const { return b; }
double ExpressionCalculator::getC() const { return c; }

double ExpressionCalculator::SafeLog(double value) {
    if (value <= 0)
        throw std::invalid_argument("Ëîãàðèôì â³ä íóëÿ àáî â³ä’ºìíîãî ÷èñëà íåìîæëèâèé.");
    return log(value);
}

double ExpressionCalculator::Calculate() {  
    double numerator = SafeLog((a * b + 2) * c);
    if (c == 0)
        throw std::domain_error("Ä³ëåííÿ íà íóëü.");
    double denominator = 41 - b / c + 1;
    return numerator / denominator;
}
