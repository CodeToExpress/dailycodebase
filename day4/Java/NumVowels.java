import java.util.Scanner;

public class NumVowels {
    public static void main (String[] args) {
        // set count = 0
        int count = 0;

        // Input the string
        Scanner input = new Scanner(System.in);
        System.out.println("/* ===== Number of Vowels ===== */");
        System.out.print("\nEnter the string: ");
        String str = input.next();

        // Convert input string to lower case
        str = str.toLowerCase();

        // Run a loop from 0 to string length
        for (int i=0; i<str.length(); i++) {
            if (
                str.charAt(i) == 'a' ||
                str.charAt(i) == 'e' ||
                str.charAt(i) == 'i' ||
                str.charAt(i) == 'o' ||
                str.charAt(i) == 'u'
            ) {
                count++;
            }
        }

        // Print the result
        System.out.println("Number of vowels in \"" + str + "\" = " + count);
    }
}