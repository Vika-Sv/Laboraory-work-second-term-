namespace GeometryLib
{
    public class Square : Figure
    {
        private double side;

        public Square()
        {
            side = 1.0;
        }

        public Square(double side)
        {
            this.side = side;
        }

        public double GetSide() => side;

        public override double GetArea()
        {
            return side * side;
        }

        public override double GetPerimeter()
        {
            return 4 * side;
        }
    }
}
