using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Введіть слово: ");
        string input = Console.ReadLine();

        StringClass CB2;
        if (string.IsNullOrWhiteSpace(input))
        {
            CB2 = new StringClass("Hello");
        }
        else
        {
            CB2 = new StringClass(input);
        }

        StringClass CB3 = new StringClass(CB2);

        CB3 = CB3 * 2;
        StringClass CB1 = CB2 + CB3;

        Console.WriteLine($"CB1: {CB1.GetData()} (Довжина: {CB1.GetLength()})");
        Console.WriteLine($"CB2: {CB2.GetData()} (Довжина: {CB2.GetLength()})");
        Console.WriteLine($"CB3: {CB3.GetData()} (Довжина: {CB3.GetLength()})");
    }
}
