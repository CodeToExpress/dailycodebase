/**
 * String Reversal using recursion
 * @author MadhavBahl
 * @date 18/01/2019
 */

import java.util.Scanner;

public class ReverseString {
    public static String reverse (String str) {
        if (str.length() == 1)  return str;
        return reverse (str.substring(1, str.length())) + str.charAt(0);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("/*/ ===== String Reversal using Recursion ==== */");

        // Read the string
        System.out.print("\nEnter the string to be reversed: ");
        String str = input.nextLine();

        // Print the result
        System.out.println("Reversed string is: " + reverse(str));
    }
}