namespace Homework
{
    public class CharMatrix
    {
        private char[,] matrix;
        private int size;

        public CharMatrix(int size)
        {
            this.size = size;
            matrix = new char[size, size];
        }

        public string this[int diagonal]
        {
            get
            {
                string result = "";
                if (diagonal == 0) 
                {
                    for (int i = 0; i < size; i++)
                        result += matrix[i, i];
                }
                else if (diagonal == 1) 
                {
                    for (int i = 0; i < size; i++)
                        result += matrix[i, size - 1 - i];
                }
                else
                {

                    throw new IndexOutOfRangeException("Індекс має бути 0 (головна) або 1 (побічна) діагональ.");
                }
                return result;
            }
        }

        public int VowelCount
        {
            get
            {
                int count = 0;
                char[] vowels = { 'a', 'e', 'i', 'o', 'u', 'y', 'а', 'е', 'є', 'и', 'і', 'ї', 'о', 'у', 'ю', 'я' };
                foreach (char c in matrix)
                {
                    if (Array.Exists(vowels, v => v == char.ToLower(c)))
                        count++;
                }
                return count;
            }
        }

        public void SetElement(int row, int col, char value)
        {
            if (row >= 0 && row < size && col >= 0 && col < size)
                matrix[row, col] = value;
        }

        public void Print()
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                    Console.Write(matrix[i, j] + " ");
                Console.WriteLine();
            }
        }
    }
}
