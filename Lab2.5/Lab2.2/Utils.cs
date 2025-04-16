using System;

namespace GeometryLib
{
    public static class Utils
    {
        public static void ShowFigureInfo(Figure fig)
        {
            Console.WriteLine($"Площа: {fig.GetArea():F2}");
            Console.WriteLine($"Периметр: {fig.GetPerimeter():F2}");
        }
    }
}
