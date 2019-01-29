import java.util.Scanner;

public class NumVowels2 {
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

        // Create an array of vowels
        char[] vowels = new char[]{ 'a', 'e', 'i', 'o', 'u' };

        // Run a loop from 0 to string length
        for (int i=0; i<str.length(); i++) {
            // Check whether the current character exists in the vowels array
            for (int j=0; j<5; j++) {
                if (str.charAt(i) == vowels[j]) {
                    count++;
                    break;
                }
            }
        }

        // Print the result
        System.out.println("Number of vowels in \"" + str + "\" = " + count);
    }
}