using System;

public class sumUptoNTerms
{
    public static void Main(string[] args)
    {
        int number;
        Console.Write("Enter any number: ");
        number = Convert.ToInt32(Console.ReadLine());
        if (number % 2 == 0) { Console.WriteLine($"{number} is even number"); }
        else { Console.WriteLine($"{number} is odd number"); }
    }
}