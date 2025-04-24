using System.Collections.Generic;

namespace Lab5
{
    public class TextContainer
    {
        private List<TextRow> rows = new List<TextRow>();

        public void AddRow(TextRow row) => rows.Add(row);
        public void RemoveRow(int index)
        {
            if (index >= 0 && index < rows.Count)
                rows.RemoveAt(index);
        }

        public void ReplaceRow(int index, TextRow row)
        {
            if (index >= 0 && index < rows.Count)
                rows[index] = row;
        }

        public void Clear() => rows.Clear();
        public int GetRowCount() => rows.Count;

        public int TotalDigits()
        {
            int total = 0;
            foreach (var row in rows)
                total += row.CountDigits();
            return total;
        }

        public TextRow GetRow(int index)
        {
            return (index >= 0 && index < rows.Count) ? rows[index] : new TextRow();
        }
    }
}
