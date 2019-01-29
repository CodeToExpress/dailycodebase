/**
 * Product of array elements using recursion 
 * @author MadhavBahlMD
 * @date 18/01/2019
 */

import java.util.Scanner;

public class ArrayProd {
    public static double findProduct (double arr[], int n) {
        if (n <= 0)  return 1;
        return arr[n-1]*findProduct(arr, n-1);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Product of Array elements using recursion ===== */");

        // Input the array
        System.out.print("\nEnter the number of elements in the array: ");
        int n = input.nextInt();
        double arr[] = new double[n];
        for (int i=0; i<n; i++) {
            System.out.print("Enter arr[" + i + "]: ");
            arr[i] = input.nextDouble();
        }

        // Print the product
        System.out.println("The product of numbers is: " + findProduct(arr, n));
    }
}