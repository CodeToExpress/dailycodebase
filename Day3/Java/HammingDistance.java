import java.util.Scanner;

public class HammingDistance {
    public static void main (String[] args) {
        System.out.println("/* ===== The Hamming Distance Problem ===== */");

        // Input the strings
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the first string: ");
        String str1 = input.next();
        System.out.print("Enter the second string: ");
        String str2 = input.next();

        // set distance equal to zero
        int distance = 0;

        // check whether the strings are equal
        if (str1.length() != str2.length()) {
            System.out.println("Wrong Input! \"" + str1 + "\" and \"" + str2 + "\" are not of equal length");
            System.exit(-1);
        }

        // Check the different characters at corresponding positions
        for (int i=0; i<str1.length(); i++) {
            if (str1.charAt(i) != str2.charAt(i)) {
                distance++;
            }
        }

        // Print the result and return the hamming distance
        System.out.println("The Hamming Distance between the strings \"" + str1 + "\" and \"" + str2 + "\" is = " + distance);
        System.exit(0);
    }
}
