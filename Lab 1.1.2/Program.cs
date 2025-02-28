using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Введіть x1, y1, z1 або натисніть Enter для значень за замовчуванням:");
        string input = Console.ReadLine();

        Segment segment;

        if (input == "")
        {
            segment = new Segment();
        }
        else
        {
            string[] parts1 = input.Split();
            Console.WriteLine("Введіть x2, y2, z2:");
            string[] parts2 = Console.ReadLine().Split();

            segment = new Segment(
                double.Parse(parts1[0]), double.Parse(parts1[1]), double.Parse(parts1[2]),
                double.Parse(parts2[0]), double.Parse(parts2[1]), double.Parse(parts2[2])
            );
        }
        Console.WriteLine($"Довжина: {segment.GetLength():F2}");
        Console.WriteLine($"Кут з OY: {segment.GetAngleOY():F2} градусів");
    }
}
