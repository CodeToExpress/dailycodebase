/**
 * Array Reversal
 * @author MadhavBahlMD
 * @date 26/01/2019
 */

import java.util.Scanner;

public class Reverse {
    public static void inputArr (int arr[], int num) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the elements: ");
        for (int i=0; i<num; i++) {
            System.out.print("arr[" + i + "] = ");
            arr[i] = input.nextInt();
        }
    }

    public static void printArr (int arr[], int num) {
        for (int i=0; i<num; i++)
            System.out.print(arr[i] + " ");
    }

    public static void reverse (int arr[], int num) {
        int temp;
        for (int i=0; i<=num/2; i++) {
            temp = arr[i];
            arr[i] = arr[num-i-1];
            arr[num-i-1] = temp;
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("/* ===== bubble Sort ===== */");

        // Input the array
        System.out.print("\nEnter the number of elements in the array: ");
        int num = input.nextInt();
        int arr[] = new int[num];
        inputArr(arr, num);

        // Print the array
        System.out.print("\nOriginal Array: ");
        printArr(arr, num);

        // Reverse the array
        reverse(arr, num);

        // Print the array
        System.out.print("\n\nReversed Array: ");
        printArr(arr, num);
    }
}