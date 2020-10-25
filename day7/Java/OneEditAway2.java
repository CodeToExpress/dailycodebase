import java.util.Scanner;

/*
    Author: Grace Hudgens (Grace0Hud)
    Date: 10/25/20


    Problem: Day 7 -
        Given two strings, check whether they are one edit distance apart,
        i.e., if str1 and str2 are the given strings,
        check whether str1 can be converted to str2 with exactly one edit.
    An edit between 2 strings is one of the following operations
        - Replace a character
        - Add a character
        - Delete a character
        - The strings are the same
 */
public class OneEditAway
{
    public static void main(String [] args)
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("------ One Edit Away -------");
        System.out.println("1st String: ");
        String str1 = scan.nextLine();
        System.out.println("2nd String: ");
        String str2 = scan.nextLine();
        System.out.println("These strings are one edit away: "  + isOneEditAway(str1,str2));
        //testing of algorithm
        /*
        //expected true - success
        System.out.println(isOneEditAway("is", "isa"));
        //expected true - success
        System.out.println(isOneEditAway("is", "is"));
        //expected false - success
        System.out.println(isOneEditAway("is", "isac"));
        //expected true - success
        System.out.println(isOneEditAway("Grace", "Grice"));
        //expected false - success
        System.out.println(isOneEditAway("thisisastring", "thisisoneisa"));

         */
    }//end main method

    public static boolean isOneEditAway(String str1, String str2)
    {
        boolean output = false;
        //first checks if the strings equal each other
        if(str1.equals(str2))
        {
          output = true;
        }else if(str1.length() == str2.length() || Math.abs(str1.length() - str2.length() )== 1)
        {
            //then check how much of a difference there is between them.
            //if its only one letter difference then true

            //used to keep track of the amt of letters that are different
            int diff = 0;
            //strings to char arrays
            char[] smallest;
            char[] largest;
            //decides which string is longer and adds to diff;
            //if strings are the same size it does not add to diff
            if(str1.length() < str2.length())
            {
                smallest = str1.toCharArray();
                largest = str2.toCharArray();
                diff++;
            }else if(str1.length() > str2.length())
            {
                smallest = str2.toCharArray();
                largest = str1.toCharArray();
                diff++;
            }else
            {
                smallest = str1.toCharArray();
                largest = str2.toCharArray();
            }//end if

            //for loop that cycles through both arrays
            //if one of the letters does not equal the other, it adds to diff
            for(int i = 0; i < smallest.length; i++)
            {
                if(smallest[i] != largest[i])
                {
                    diff++;
                }//end inner if
            }//end for loop

            if(diff  == 1)
            {
                output = true;
            }//end if changing output value
        }//end else if
        return output;
    }//end isoneeditaway method
}//end of OneEditAway class
