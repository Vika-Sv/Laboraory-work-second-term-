using System;

class Program
{
    static void Main()
    {
        Segment seg1 = new Segment();
        Segment seg2 = new Segment(seg1);

        Console.WriteLine("Сегмент 1 (за замовчуванням):");
        Console.WriteLine($"Довжина: {seg1.GetLength():F2}, Кут з OY: {seg1.GetAngleOY():F2} градусів\n");

        Console.WriteLine("Сегмент 2 (копія сегмента 1):");
        Console.WriteLine($"Довжина: {seg2.GetLength():F2}, Кут з OY: {seg2.GetAngleOY():F2} градусів");
    }
}
