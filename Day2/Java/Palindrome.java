/**
 * @author MadhavBahl
 * @date 21/12/2018
 */
 
import java.util.Scanner;

public class Palindrome {
    public static void main (String[] args) {
        System.out.println("/* ===== Palindrome Check ===== */");
        System.out.print("\nPlease enter a string to check: ");

        // Read the string
        Scanner input = new Scanner(System.in);
        String str = input.next();
        int size = str.length(), flag =1;

        // Check whether it is palindrome
        for (int i=0, j=size-1; i<=size/2; i++, j--) {
            // Check whether the characters equidistant from start and end are same or not
            if (str.charAt(i) != str.charAt(j)) {
                flag = 0;
                break;
            }
        }

        // Print results according to flag
        if (flag == 0) {
            System.out.println("The given string \"" + str + "\" is not a palindrome");
        } else {
            System.out.println("The given string \"" + str + "\" is a palindrome");
        }
    }
}
