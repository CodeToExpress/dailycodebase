/* date - 23/09/2020
 * author - @Shashwat Gupta (shashwatxdevelop)
 */
import java.util.Scanner;
public class StringReverseAndPalin {

	public static void main(String[] args) {
		String s,s1=""; int i, l;
		char ch = 0;
         Scanner sc= new Scanner (System.in);
         s = sc.nextLine();   // Input the string
         l = s.length();     // Taking the length of string
         for(i=l-1; i>=0; i--)       // For loop for the extraction of character from the string s
         {
        	 ch = s.charAt(i);
        	 s1 = s1+ ch;               // Storing the extracted character in new string s1 
         }
          System.out.println(s1);             // Printing the new reversed string s1
          if (s.equals(s1))               // if block to  check if the reversed string is palindrome or not
        	  System.out.println("String is Palindrome");
        	  else
        		  System.out.println("String is not Palindrome");
	}

}
