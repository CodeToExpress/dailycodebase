/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */
 
import java.util.Scanner;
// Method 2: Check whether reversed string is equal to the original string

public class Palindrome2 {
    public static void main (String[] args) {
        System.out.println("/* ===== Palindrome Check ===== */");
        System.out.print("\nPlease enter a string to check: ");

        // Read the string
        Scanner input = new Scanner(System.in);
        String str = input.next();
        String reversed = "";
        int size = str.length();

        // Reverse the string
        for (int i=0; i<str.length(); i++) {
            reversed = str.charAt(i) + reversed;
        }
        
        // Check if the reversed string is same as the original string
        if (str.equals(reversed)) {
            System.out.println ("The given string \"" + str + "\" is a Palindrome");
        } else {
            System.out.println ("The given string \"" + str + "\" is not a Palindrome");
        }
    }
}
