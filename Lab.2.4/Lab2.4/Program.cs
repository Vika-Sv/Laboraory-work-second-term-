using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        try
        {
            Console.Write("Введіть a, b, c через пробіл: ");
            string input = Console.ReadLine();

            ExpressionCalculator calc;

            if (string.IsNullOrWhiteSpace(input))
            {
                calc = new ExpressionCalculator();
            }
            else
            {
                string[] parts = input.Split();
                if (parts.Length < 3)
                    throw new FormatException("Треба ввести 3 значення: a, b, c");

                double a = double.Parse(parts[0]);
                double b = double.Parse(parts[1]);
                double c = double.Parse(parts[2]);

                calc = new ExpressionCalculator(a, b, c);
            }

            double result = calc.Calculate();
            Console.WriteLine($"Результат: {result:F4}");
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Помилка: {ex.Message}");
        }
    }
}
