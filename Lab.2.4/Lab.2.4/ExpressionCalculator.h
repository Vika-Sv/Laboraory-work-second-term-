#ifndef EXPRESSIONCALCULATOR_H
#define EXPRESSIONCALCULATOR_H

class ExpressionCalculator {
private:
    double a, b, c;
    double SafeLog(double value);//Якщо підлогорофмичнй вираз буде 0, воно не дасть його порахувати, бо логорифм не може бути 0

public:
    ExpressionCalculator(); // конструктор за замовчуванням
    ExpressionCalculator(double a, double b, double c); // з параметрами

    double Calculate();

    double getA() const;
    double getB() const;
    double getC() const;
};

#endif
