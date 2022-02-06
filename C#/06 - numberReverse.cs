using System;

public class numberReverse
{
    public static void Main(string[] args)
    {
        int original, reversed = 0, n, reminder;
        Console.Write("Enter any number: ");
        original = Convert.ToInt32(Console.ReadLine());
        n = original;
        while (n > 0) {
            reminder = n % 10;
            reversed = (reversed * 10) + reminder;
            n /= 10;
        }
        Console.WriteLine($"{reversed} is the reversed form of {original}");
    }
}