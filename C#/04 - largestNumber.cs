using System;

public class largestNumber
{
    public static void Main(string[] args)
    {
        int a,b,c;
        Console.Write("Enter first number: ");
        a = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter second number: ");
        b = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter second number: ");
        c = Convert.ToInt32(Console.ReadLine());
        if (a > b && a > c){ Console.WriteLine($"{a} is the largest number"); }
        else if (b > a && b > c){ Console.WriteLine($"{b} is the largest number"); }
        else if (c > a && c > b){ Console.WriteLine($"{c} is the largest number"); }
        else { Console.WriteLine("At least two largest numbers are equal"); }
    }
}