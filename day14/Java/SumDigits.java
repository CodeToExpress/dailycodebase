/**
 * @author MadhavBahlMD
 * @date 08/01//2018
 */

import java.util.Scanner;

public class SumDigits {
    public static int sum (int num) {
        if (num/10 < 1)
            return num;
        else
            return (num%10) + sum(num/10);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Sum of digits using recursion ===== */");
        System.out.print("\nEnter a number: ");
        int num = input.nextInt();
        System.out.println("Sum of digits of " + num + " is: " + sum(num));
    }
}