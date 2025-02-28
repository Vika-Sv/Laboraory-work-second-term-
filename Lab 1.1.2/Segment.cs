using System;

public class Segment
{
    private double x1, y1, z1, x2, y2, z2;

    public Segment()
    {
        x1 = y1 = z1 = 0;
        x2 = y2 = z2 = 1;
    }

    public Segment(double x1, double y1, double z1, double x2, double y2, double z2)
    {
        this.x1 = x1;
        this.y1 = y1;
        this.z1 = z1;
        this.x2 = x2;
        this.y2 = y2;
        this.z2 = z2;
    }

    public Segment(Segment other)
    {
        x1 = other.x1;
        y1 = other.y1;
        z1 = other.z1;
        x2 = other.x2;
        y2 = other.y2;
        z2 = other.z2;
    }

~Segment()
    {
        Console.WriteLine("Segment object is being destroyed");
    }

    public double GetLength()
    {
        return Math.Sqrt(Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2) + Math.Pow(z2 - z1, 2));
    }

    public double GetAngleOY()
    {
        double length = GetLength();
        return length == 0 ? 0 : Math.Acos(Math.Abs(y2 - y1) / length) * 180 / Math.PI;
    }
}
