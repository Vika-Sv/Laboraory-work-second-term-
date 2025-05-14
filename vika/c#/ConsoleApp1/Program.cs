using System;
namespace Homework
{
    class Program
    {
        static void Main()
        {
            Console.OutputEncoding = System.Text.Encoding.UTF8;

            Console.Write("Введіть розмір квадратної матриці: ");
            int size = int.Parse(Console.ReadLine());

            CharMatrix matrix = new CharMatrix(size);

            Console.WriteLine("Введіть символи матриці:");
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    Console.Write($"[{i},{j}]: ");
                    matrix.SetElement(i, j, Console.ReadKey().KeyChar);
                    Console.WriteLine();
                }
            }

            Console.WriteLine("\nВаша матриця:");
            matrix.Print();

            Console.WriteLine("\nГоловна діагональ: " + matrix[0]);
            Console.WriteLine("Побічна діагональ: " + matrix[1]);
            Console.WriteLine("Кількість голосних літер: " + matrix.VowelCount);
        }
    }
}