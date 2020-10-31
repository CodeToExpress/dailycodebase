import java.util.Scanner;

/**
 * Reverse an array using recursion
 * @author MadhavBahl
 * @date 18/01/2019
 */

public class ReverseArray {
    public static void reverse (int[] arr, int startIndex, int endIndex) {
        if (startIndex >= endIndex) return;

        // Swap equidistant elements from start and end
        int temp = arr[startIndex];
        arr[startIndex] = arr[endIndex];
        arr[endIndex] = temp;

        reverse (arr, startIndex+1, endIndex-1);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Sum of Array elements using recursion ===== */");

        // Input the array
        System.out.print("\nEnter the number of elements in the array: ");
        int n = input.nextInt();
        int arr[] = new int[n];
        for (int i=0; i<n; i++) {
            System.out.print("Enter arr[" + i + "]: ");
            arr[i] = input.nextInt();
        }

        // Print the original array
        System.out.print("Original Array: ");
        for (int i=0; i<arr.length; i++)
            System.out.print(arr[i] +  " ");

        // Reverse the array
        reverse(arr, 0, arr.length-1);

        // Print the reversed array
        System.out.print("\nReversed Array: ");
        for (int i=0; i<arr.length; i++)
            System.out.print(arr[i] +  " ");
    }
}
