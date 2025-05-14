using System;

class Program
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        Console.Write("Введіть розмір квадратної матриці: ");
        int n = int.Parse(Console.ReadLine());

        CharMatrix matrix = new CharMatrix(n);

        Console.WriteLine("Введіть символи для матриці:");

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                Console.Write($"[{i},{j}]: ");
                char c = Console.ReadKey().KeyChar;
                Console.WriteLine();
                matrix.SetElement(i, j, c);
            }
        }

        Console.WriteLine("\nМатриця:");
        matrix.PrintMatrix();

        Console.WriteLine("\nГоловна діагональ: " + matrix[0]);
        Console.WriteLine("Побічна діагональ: " + matrix[1]);
        Console.WriteLine("Кількість голосних: " + matrix.VowelCount);
    }
}
