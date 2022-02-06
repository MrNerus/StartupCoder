using System;

public class stringPalindromeOrNot
{
    public static void Main(string[] args)
    {
        string a = "", b = "";
        int i = 0, ri = 0;
        Console.Write("Enter a string: ");
        a = Console.ReadLine();
        while (i < a.Length){
            ri = a.Length - 1 - i;
            b += a[ri];
            i++;
        }
        if (a == b){ Console.WriteLine($"{a} is a palindrome string"); }
        else { Console.WriteLine($"{a} is not a palindrome string"); }
    }
}