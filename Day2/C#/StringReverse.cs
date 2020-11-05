/**
 * 
 * @author: Senbagaraman Manoharan
 * @date: 19th October 2020
 * 
 * Given a string, write a program to return a new string with reversed order of characters
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
        Console.Write("The string to be reversed: ");
        enteredString = Console.ReadLine();
        stringLength = enteredString.Length - 1;
        while (stringLength >= 0)
        {
            rvrString = rvrString + enteredString[Length];
            stringLength--;
        }
        Console.WriteLine("The reversed string is {0}", rvrString);
        Console.ReadLine();
    }
}	