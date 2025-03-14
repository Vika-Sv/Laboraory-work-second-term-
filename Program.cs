﻿using System;

class Segment
{
    private double x1, y1, z1, x2, y2, z2;

    public Segment(double x1, double y1, double z1, double x2, double y2, double z2)
    {
        this.x1 = x1;
        this.y1 = y1;
        this.z1 = z1;
        this.x2 = x2;
        this.y2 = y2;
        this.z2 = z2;
    }

    public double GetLength()
    {
        return Math.Sqrt(Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2) + Math.Pow(z2 - z1, 2));
    }

    public double GetAngleOY()
    {
        double length = GetLength();
        return Math.Acos(Math.Abs(y2 - y1) / length) * 180 / Math.PI;
    }

    
    public void PrintInfo()
    {
        Console.WriteLine($"Координати початку: ({x1}, {y1}, {z1})");
        Console.WriteLine($"Координати кінця: ({x2}, {y2}, {z2})");
        Console.WriteLine($"Довжина відрізка: {GetLength():F2}");
        Console.WriteLine($"Кут з віссю OY: {GetAngleOY()} градусів");
    }
}

class Program
{
    static void Main()
    {
        Segment segment = new Segment(1, 2, 3, 4, 6, 8);
        segment.PrintInfo();
    }
}
