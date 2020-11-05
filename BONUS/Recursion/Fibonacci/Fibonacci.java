import java.util.Scanner;

/**
 * Nth element of fibonacci series using recursion
 * @author MadhavBahl
 * @date 18/01/2019
 */

public class Fibonacci {
    public static int findElement (int num) {
        if (num <= 2)   return 1;
        return findElement(num-1) + findElement(num-2);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Fibonacci using recursion ===== */");

        // Take the input
        System.out.print("\nEnter the value of n: ");
        int n = input.nextInt();

        // Print the result
        System.out.println(n + "th number of fibonacci series is: " + findElement(n));
    }
}
