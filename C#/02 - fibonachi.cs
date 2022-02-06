using System;

public class fibonachi
{
    public static void Main(string[] args)
    {
        int previous = 0, current = 1, next = previous + current, i = 3, n;
        Console.Write("Enter number of fibonachi terms: ");
        n = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine(previous + "\n" + current);
        while (i <= n)
        {
            Console.WriteLine(next);
            previous = current;
            current = next;
            next = previous + current;
            i++;
        }
    }
}