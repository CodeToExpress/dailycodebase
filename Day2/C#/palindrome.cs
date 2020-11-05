/**
 * 
 * @author: Senbagaraman Manoharan
 * @date: 19th October 2020
 * 
 * Given a string, write a funcation which prints whether the given string is palindrome or nor 
 * 
 * */
using System;
using System.Collections.Generic;
using System.Reflection;

public class Program
{

    public static void Main()
    {
        string enteredString, rvrString = "";
        int stringLength;
        Console.Write("The string to be checked: ");
        enteredString = Console.ReadLine();
        stringLength = enteredString.Length - 1;
        while (stringLength >= 0)
        {
            rvrString = rvrString + enteredString[Length];
            stringLength--;
        }
        Console.WriteLine("The reversed string is {0}", rvrString);

        if(enteredString.Equals(rvrString))
        {
            Console.WriteLine("The given string is palindrome");
        }
        else
        {
            Console.WriteLine("The given string is not palindrome");
        }

        Console.ReadLine();
    }
}