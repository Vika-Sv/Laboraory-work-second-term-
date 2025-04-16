using System;
using GeometryLib;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        
        Console.WriteLine("Введіть координати точки 1 (x1 y1):");
        string input1 = Console.ReadLine();

        Square square;

        if (string.IsNullOrWhiteSpace(input1))
        {
            square = new Square();
        }
        else
        {
            Console.WriteLine("Введіть координати точки 2 (x2 y2):");
            string input2 = Console.ReadLine();

            string[] parts1 = input1.Split();
            string[] parts2 = input2.Split();

            double x1 = double.Parse(parts1[0]);
            double y1 = double.Parse(parts1[1]);
            double x2 = double.Parse(parts2[0]);
            double y2 = double.Parse(parts2[1]);

            square = new Square(x1, y1, x2, y2);
        }

        // Введення радіуса кола
        Console.WriteLine("\nВведіть радіус кола:");
        string circleInput = Console.ReadLine();

        Circle circle;
        if (string.IsNullOrWhiteSpace(circleInput))
        {
            circle = new Circle(); 
        }
        else
        {
            double radius = double.Parse(circleInput);
            circle = new Circle(radius);
        }

        Console.WriteLine("\n--- Інформація про квадрат ---");
        Utils.ShowFigureInfo(square);

        Console.WriteLine("\n--- Інформація про коло ---");
        Utils.ShowFigureInfo(circle);
    }
}
