/*
 * @author thefluffyoshi
 * date: 30/10/2020
 */

import java.util.Scanner;

public class Palindrome_thefluffyoshi
{
    public static void main (String[] args)
    {
        //Instantiating variables
        String str_reverse = "";

        //Inputted word
        System.out.print("Please input the word you want to check: ");
        Scanner input = new Scanner(System.in);
        String str = input.next();

        //Reversing the inputted word
        for (int i = str.length() - 1; i >= 0; i--)
        {
            str_reverse = str_reverse + str.charAt(i);
        }//end for loop reversal

        //Checking if inputted word is a Palindrome
        if (str_reverse.equals(str))
        {
            System.out.println("true");
        }
        else
        {
            System.out.println("false");
        }

    }//end main
}//end public class