#include "ExpressionCalculator.h"
#include <cmath>
#include <stdexcept>

ExpressionCalculator::ExpressionCalculator() : a(1), b(2), c(3) {} //за замовчуванням

ExpressionCalculator::ExpressionCalculator(double a, double b, double c)// з параметром 
    : a(a), b(b), c(c) {
}

double ExpressionCalculator::getA() const { return a; }
double ExpressionCalculator::getB() const { return b; }
double ExpressionCalculator::getC() const { return c; }

double ExpressionCalculator::SafeLog(double value) {
    if (value <= 0)
        throw std::invalid_argument("Логарифм від нуля або від’ємного числа неможливий.");
    return log(value);
}

double ExpressionCalculator::Calculate() { //Рахує сам вираз, рахує окремо чисельник, потім робить перевірку, щоб знамник b/c типу не дорівнював 0, ну і поті окремо рахує знаменик. Повертає чисельник / знакменик 
    double numerator = SafeLog((a * b + 2) * c);
    if (c == 0)
        throw std::domain_error("Ділення на нуль.");
    double denominator = 41 - b / c + 1;
    return numerator / denominator;
}
