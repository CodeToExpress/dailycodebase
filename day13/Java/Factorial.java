/**
 * @author MadhavBahl
 * @date 07/01/2018
 */

import java.util.Scanner;

public class Factorial {
    public static int factorial (int num) {
        if (num <= 1)
            return 1;
        else
            return num * factorial(num-1);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Factorial Using Recursion ===== */");
        System.out.print("\nEnter a number: ");
        int num = input.nextInt();
        System.out.println("Factorial of " + num + " is: " + factorial(num));
    }
}
