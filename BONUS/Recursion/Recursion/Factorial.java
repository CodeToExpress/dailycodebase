/**
 * Factorial using recursion
 * @author MadhavBahlMD
 * @date 18/01/2019
 */

import java.util.Scanner;

public class Factorial {
    public static int findFactorial (int num) {
        if (num <= 1)   return 1;
        return num*findFactorial(num-1);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("/* ===== Factorial using recursion ===== */");

        // Read the number
        System.out.print("\nEnter a number: ");
        int num = input.nextInt();

        // Print the factorial
        System.out.println("Factorial of " + num + " is = " + findFactorial(num));
    }
}
