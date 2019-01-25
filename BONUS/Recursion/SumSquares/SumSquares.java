/**
 * Sum of squares
 * @author MadhavBahlMD
 * @date 26/01/2019
 */

import java.util.Scanner;

public class SumSquares {
    public static int sum (int n) {
        if (n <= 0) return 0;
        else return (n*n) + sum(n-1);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("/* ===== Sum of squares of n natural numbers ===== */");
        System.out.print("\nEnter the number n: ");
        int n = input.nextInt();
        System.out.println("sum of squares of " + n + " natural numbers = " + sum(n));
    }
}
