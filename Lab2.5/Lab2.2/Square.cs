using System;

namespace GeometryLib
{
    public class Square : Figure
    {
        private double x1, y1;
        private double x2, y2;

        public Square()
        {
            x1 = 0; y1 = 0;
            x2 = 1; y2 = 1;
        }

        public Square(double x1, double y1, double x2, double y2)
        {
            this.x1 = x1;
            this.y1 = y1;
            this.x2 = x2;
            this.y2 = y2;
        }

        public double GetSide()
        {
            return Math.Abs(x2 - x1); 
        }

        public override double GetArea()
        {
            double side = GetSide();
            return side * side;
        }

        public override double GetPerimeter()
        {
            return 4 * GetSide();
        }

        public double GetX1() => x1;
        public double GetY1() => y1;
        public double GetX2() => x2;
        public double GetY2() => y2;
    }
}
