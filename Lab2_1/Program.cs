using System;

class Program
{
    static void Main()
    {
        Console.Write("Введіть рядок: ");
        string input = Console.ReadLine();

        LetterString myString = string.IsNullOrEmpty(input) ? new LetterString() : new LetterString(input);

        Console.WriteLine("Введений рядок: " + myString.GetText());
        Console.WriteLine("Довжина: " + myString.GetLength());

        myString.ShiftLeft();
        Console.WriteLine("Рядок після зміни останньої букви: " + myString.GetShiftedText());
    }
}
