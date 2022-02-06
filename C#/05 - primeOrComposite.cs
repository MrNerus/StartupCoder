using System;

public class primeOrComposite
{
    public static void Main(string[] args)
    {
        int n, i = 2;
        Console.Write("Enter any number: ");
        n = Convert.ToInt32(Console.ReadLine());
        int r = (int)Math.Sqrt(n);
        while (true) {
            if (i > r) { Console.WriteLine(n + " is prime"); break; }
            if (n % i == 0) { Console.WriteLine(n + " is composite"); break; }
            i++;
        }
    }
}