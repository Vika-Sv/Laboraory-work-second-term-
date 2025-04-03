using System;

public class StringBase
{
    protected string text;

    public StringBase()
    {
        text = "Hello";
    }

    public StringBase(string str)
    {
        text = str;
    }

    public StringBase(StringBase other)
    {
        text = other.text;
    }

    public int GetLength()
    {
        return text.Length;
    }

    public string GetText()
    {
        return text;
    }
}
