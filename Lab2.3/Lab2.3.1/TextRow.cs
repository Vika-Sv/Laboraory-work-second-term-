namespace Lab5
{
    public class TextRow : INumberAnalysis
    {
        private string text;

        public TextRow()
        {
            text = "default";
        }

        public TextRow(string text)
        {
            this.text = text;
        }

        public string GetText() => text;
        public void SetText(string str) => text = str;

        public int CountDigits()
        {
            int count = 0;
            foreach (char c in text)
                if (char.IsDigit(c)) count++;
            return count;
        }
    }
}
