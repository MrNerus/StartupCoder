using System;

public class sumUptoNTerms
{
    public static void Main(string[] args)
    {
        Console.Write("Enter number of numbers to add: ");
        int n = Convert.ToInt32(Console.ReadLine());
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += i;
        }
        Console.WriteLine("The sum is " + sum);
    }
}