/*
*@Author: Jaqueline Gomez
* Date: 10/26/2020
*  */

import java.util.Scanner;
class FizzBuzz
{
    public static void main(String[] args)
    {
        Scanner num_input = new Scanner(System.in);
        String input = num_input.next();
        int num= Integer.parseInt(input);
        if(num%3==0)
        {
            System.out.print("Fizz");
        }
        if(num%5==0)
        {
            System.out.print("Buzz");
        }
    }

}