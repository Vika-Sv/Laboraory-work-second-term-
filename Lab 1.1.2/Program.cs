using System;

class Program
{
    static void Main()
    {
        Segment segment1 = new Segment();
        Console.WriteLine($"Довжина (за замовчуванням): {segment1.GetLength():F2}");
        Console.WriteLine($"Кут з OY: {segment1.GetAngleOY():F2} градусів\n");

        Console.Write("Введіть x1, y1, z1: ");
        double x1 = double.Parse(Console.ReadLine());
        double y1 = double.Parse(Console.ReadLine());
        double z1 = double.Parse(Console.ReadLine());

        Console.Write("Введіть x2, y2, z2: ");
        double x2 = double.Parse(Console.ReadLine());
        double y2 = double.Parse(Console.ReadLine());
        double z2 = double.Parse(Console.ReadLine());

        Segment segment2 = new Segment(x1, y1, z1, x2, y2, z2);
        Console.WriteLine($"Довжина: {segment2.GetLength():F2}");
        Console.WriteLine($"Кут з OY: {segment2.GetAngleOY():F2} градусів");
    }
}
