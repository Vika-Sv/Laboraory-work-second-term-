using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Введіть слово: ");
        string input = Console.ReadLine();

        String CB2;
        if (string.IsNullOrWhiteSpace(input))
        {
            CB2 = new String("Hello");
        }
        else
        {
            CB2 = new String(input);
        }

        String CB3 = new String(CB2);

        CB3 = CB3 * 2;
        String CB1 = CB2 + CB3;

        Console.WriteLine($"CB1: {CB1.GetData()} (Довжина: {CB1.GetLength()})");
        Console.WriteLine($"CB2: {CB2.GetData()} (Довжина: {CB2.GetLength()})");
        Console.WriteLine($"CB3: {CB3.GetData()} (Довжина: {CB3.GetLength()})");
    }
}
