#include "ExpressionCalculator.h"
#include <cmath>
#include <stdexcept>

ExpressionCalculator::ExpressionCalculator() : a(1), b(2), c(3) {} //�� �������������

ExpressionCalculator::ExpressionCalculator(double a, double b, double c)// � ���������� 
    : a(a), b(b), c(c) {
}

double ExpressionCalculator::getA() const { return a; }
double ExpressionCalculator::getB() const { return b; }
double ExpressionCalculator::getC() const { return c; }

double ExpressionCalculator::SafeLog(double value) {
    if (value <= 0)
        throw std::invalid_argument("�������� �� ���� ��� �䒺����� ����� ����������.");
    return log(value);
}

double ExpressionCalculator::Calculate() { //���� ��� �����, ���� ������ ���������, ���� ������ ��������, ��� ������� b/c ���� �� ��������� 0, �� � ��� ������ ���� ��������. ������� ��������� / ��������� 
    double numerator = SafeLog((a * b + 2) * c);
    if (c == 0)
        throw std::domain_error("ĳ����� �� ����.");
    double denominator = 41 - b / c + 1;
    return numerator / denominator;
}
