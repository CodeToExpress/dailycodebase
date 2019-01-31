/*
 * @author Nomit Pahuja
 * date: 29/01/2018
 */

import java.util.Scanner;

 public class ReverseString {
    
    public static String reverseString(String word, int length){
        String reverseWord = "";
        for(int i=length-1; i>=0; i--){
            reverseWord += word.charAt(i);
        }
        return reverseWord;
    }
    
    public static void main(String[] args){
         Scanner input = new Scanner(System.in);
         System.out.print("Enter the String: ");
         String word = input.next();
         int length = word.length();
         String reverse = reverseString(word, length);
         System.out.println("The reversed string is: " + reverse);
         input.close();
     }
 }