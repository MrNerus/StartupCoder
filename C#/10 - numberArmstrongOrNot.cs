using System;

public class numberArmsstrongOrNot
{
    public static void Main(string[] args)
    {
        int original, buffer, reminder, sum = 0;
        Console.Write("Enter any number: ");
        original = Convert.ToInt32(Console.ReadLine());
        buffer = original;
        while (buffer > 0)
        {
            reminder = buffer % 10;
            sum += (int)Math.Pow(reminder, 3);
            buffer /= 10;
        }
        if (original == sum)
        {
            Console.WriteLine($"{original} is an Armstrong number");
        }
        else
        {
            Console.WriteLine($"{original} is not an Armstrong number");
        }
    }
}