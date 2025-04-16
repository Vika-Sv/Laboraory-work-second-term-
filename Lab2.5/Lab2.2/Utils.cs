using System;

namespace GeometryLib
{
    public static class Utils
    {
        public static void ShowFigureInfo(Figure fig)
        {
            Console.WriteLine("Площа: " + fig.GetArea());
            Console.WriteLine("Периметр: " + fig.GetPerimeter());
        }
    }
}
