import java.util.Scanner;
/*
    Author: Grace Hudgens (Grace0Hud)
    Date: 10/25/20
    Problem: Day 4: Given a string, Write a program that prints the number of vowels in it.
 */
public class NumVowels3
{
    public static void main(String [] args)
    {
        System.out.println("----------NumVowels-----------");
        System.out.println("Enter a String: ");
        //user input
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        //output
        System.out.println("It has "  + findNumVowels(input) + " vowels");


        //general tests
        /*
        //expected output 2 - good
        System.out.println(findNumVowels("hello"));
        //expected 16 - good
        System.out.println(findNumVowels("this is an interesting sentence. yes very interesting."));
        //expected 18
        System.out.println(findNumVowels("tHiS hAs cApital lEtters and not cApital letters. yUO get it?"));
         */
    }//end main method

    public static int findNumVowels(String str)
    {
        int output = 0;
        //turning the string into an array of characters
        char[] strchar = str.toLowerCase().toCharArray();
        //cycling through the array
        for(int i = 0; i < str.length(); i++)
        {
            //adding to output if the char at i is a vowel
            if(strchar[i] == 'a' || strchar[i] == 'e' || strchar[i] == 'i' || strchar[i] == 'o' || strchar[i] == 'u')
                output++;
        }//end for loop
        return output;
    }//end findNumVowels method
}//end class NumVowels3
