/*
* @author: Jaqueline Gomez
* Date: 10/26/2020
* */

import java.util.Scanner;

class StringReversalAndPalindrome
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String str_original = input.next();
        String reversed="";

        for(int i=str_original.length()-1;i>=0;i--)
        {
            reversed+= str_original.charAt(i);
        }
        System.out.println("The string, " +str_original+", reversed is " + reversed);

        if(str_original.equals(reversed))
        {
            System.out.println(str_original+" is a palindrome!!");
        }
        else
        {
            System.out.println(str_original+" is NOT a palindrome :(");
        }

    }
}