using System;
using GeometryLib;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        Console.Write("Введіть сторону квадрата: ");
        string squareInput = Console.ReadLine();
        Square square;

        if (string.IsNullOrWhiteSpace(squareInput))
        {
            square = new Square();
        }
        else
        {
            double side = double.Parse(squareInput);
            square = new Square(side);
        }

        Console.Write("Введіть радіус кола: ");
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
