/**
 * @author MadhavBahl
 * @date 07/01/2018
 */

import java.util.Scanner;

public class Fibonacci {
    public static int fibonacci (int num) {
        if (num <= 2)
            return 1;
        else
            return fibonacci (num-1) + fibonacci (num-2);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Fibonacci Using Recursion ===== */");
        System.out.print("\nEnter a number: ");
        int n = input.nextInt();

        // Print the nth element in the sequence
        System.out.println("\nThe " + n + "th element in fibonacci series is: " + fibonacci(n));

        // Print the sequence
        System.out.print("The sequence is: ");
        for (int i=1; i<=n; i++) {
            if (i<n)
                System.out.print(fibonacci(i) + ", ");
            else
                System.out.print(fibonacci(i));
        }
    }
}
