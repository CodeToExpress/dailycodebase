/*
 * @author thefluffyoshi
 * date: 31/10/2020
 */

import java.util.Scanner;

public class FizzBuzz_thefluffyoshi
{
    public static void main (String[] args)
    {
        int num, i;
        System.out.print("Enter a number: ");
        Scanner scan = new Scanner(System.in);
        num = scan.nextInt();

        for (i = 1; i < num; i++)
        {
            if (i%15 == 0)
            {
                System.out.print("Fizzbuzz" + " ");
            }
            else if (i%5 == 0)
            {
                System.out.print("Buzz" + " ");
            }
            else if (i%3 == 0)
            {
                System.out.print("Fizz" + " ");
            }
        }
    }
}