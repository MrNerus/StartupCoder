using System;

public class numberPalindromeOrNot
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
            n = n / 10;
        }
        if (original == reversed) { Console.WriteLine($"{original} is a palindrome number"); }
        else { Console.WriteLine($"{original} is not a palindrome number"); }
    }
}