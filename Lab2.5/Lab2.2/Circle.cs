using System;

namespace GeometryLib
{
    public class Circle : Figure
    {
        private double radius;

        public Circle()
        {
            radius = 1.0;
        }

        public Circle(double radius)
        {
            this.radius = radius;
        }

        public double GetRadius() => radius;

        public override double GetArea()
        {
            return Math.PI * radius * radius;
        }

        public override double GetPerimeter()
        {
            return 2 * Math.PI * radius;
        }
    }
}
