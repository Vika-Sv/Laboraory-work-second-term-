public class LetterString : StringBase
{
    public LetterString() : base() { }

    public LetterString(string str) : base(str) { }

    public LetterString(LetterString other) : base(other) { }

    public void ShiftLeft()
    {
        if (text.Length > 1)
        {
            char lastChar = text[text.Length - 1]; 
            text = lastChar + text.Substring(0, text.Length - 1); 
        }
    }


    public string GetShiftedText()
    {
        return text;
    }
}
