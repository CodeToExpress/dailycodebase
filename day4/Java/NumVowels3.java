/*
 * @author: Jaqueline Gomez
 * Date: 10/26/2020
 * */
import java.util.Scanner;

class NumVowels3
{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.next();
        char[] vowels={'a','e','i','o','u'};
        int numVowels=0;
        for(int i = str.length()-1;i>=0;i--)
        {
            for( char s: vowels)
            {
                if(s==str.charAt(i))
                {
                    numVowels++;
                }
            }
        }
        System.out.println(str+" has "+numVowels+" of vowels");
    }
}