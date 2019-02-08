/*
 * @author Nomit Pahuja
 * date: 29/01/2019
 */

 import java.util.Scanner;

 public class Palindrome {
     public static void main(String[] args){
         Scanner input = new Scanner(System.in);
         System.out.print("Enter the String: ");
         String word = input.next();
         word = word.toLowerCase();
         int size = word.length();
         int flag = 1;

         //checking if string is palindrome or not
         for(int i = 0, j = size-1; i<size/2; i++, j--){
             if(word.charAt(i) != word.charAt(j)){
                 flag = 0;
             }
         }

         //print if string is palindrome or not
         if(flag == 0){
             System.out.println("The given string is not a palindrome.");
         } else {
             System.out.println("The given string is a palindrome.");
         }

         input.close();
     }
 }