using System;

public class ExpressionCalculator
{
    private double a, b, c;

    public ExpressionCalculator()
    {
        a = 1; b = 2; c = 3; // значення за замовчуванням
    }

    public ExpressionCalculator(double a, double b, double c)
    {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    private double SafeLog(double value)
    {
        if (value <= 0)
            throw new ArgumentException("Логарифм від нуля або від’ємного числа неможливий.");
        return Math.Log(value);
    }

    public double Calculate()
    {
        double numerator = SafeLog((a * b + 2) * c);
        if (c == 0)
            throw new DivideByZeroException("Ділення на нуль.");
        double denominator = 41 - b / c + 1;
        return numerator / denominator;
    }

    public double A => a;
    public double B => b;
    public double C => c;
}
