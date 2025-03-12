using System;

public class String
{
    private string data;

    public String()
    {
        data = "";
    }

    public String(string str)
    {
        data = str;
    }

    public String(String other)
    {
        data = other.data;
    }

    public int GetLength()
    {
        return data.Length;
    }

    public static String operator +(String s1, String s2)
    {
        return new String(s1.data + s2.data);
    }

    public static String operator *(String s, int n)
    {
        string newData = "";
        foreach (char c in s.data)
        {
            newData += new string(c, n);
        }
        return new String(newData);
    }

    public string GetData()
    {
        return data;
    }
}
