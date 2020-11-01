/*
 * @author thefluffyoshi
 * date: 31/10/2020
 */

import java.util.Scanner;

public class FizzBuzz_thefluffyoshi
{
    public static void main (String[] args)
    {
        //Variables
        int num, i;

        //Input a num
        System.out.print("Enter a number: ");
        Scanner scan = new Scanner(System.in);
        num = scan.nextInt();

        //Checking inputted num
        for (i = 1; i < num; i++)
        {
            //Checking if num is divisible by both 5 and 3
            if (i%15 == 0)
            {
                System.out.print("Fizzbuzz" + " ");
            }//end FizzBuzz if
            //Checking if num is divisible by 5
            else if (i%5 == 0)
            {
                System.out.print("Buzz" + " ");
            }//end Buzz else if
            //Checking if num is divisible by 3
            else if (i%3 == 0)
            {
                System.out.print("Fizz" + " ");
            }//end Fizz if
        }//end for loop checking
    }//end main
}//end class FizzBuzz