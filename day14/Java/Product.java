import java.util.Scanner;

public class Product {
    public static int recursiveProd (int num1, int num2) {
        if (num2 == 1)
            return num1;

        // If any of the numbers is zero, return 0
        if (num1 == 0 || num2 == 0)
            return 0;

        // If both numbers are less than zero negative signs can be removed
        if (num1 < 0 && num2 < 0)
            return recursiveProd (-1*num1, -1*num2);
        else if (num2 < 0)
            return recursiveProd (num2, num1);
        else
            return num1 + recursiveProd(num1, num2-1);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Product of numbers using recursion ===== */");

        // Take input
        System.out.print("\nEnter first number: ");
        int num1 = input.nextInt();
        System.out.print("Enter second number: ");
        int num2 = input.nextInt();

        // Print the result
        System.out.println("Product of numbers " + num1 + " and " + num2 + " is: " + recursiveProd(num1, num2));
    }
}
