import java.util.*;

class LinearSearch {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter the number of elements in array: ");
        int size = input.nextInt();

        System.out.println("Enter the array elements: ");
        int[] arr = new int[size];
        for (int i=0; i<size; i++) {
            System.out.print("arr[" + i + "] = ");
            arr[i] = input.nextInt();
        }

        System.out.print("Enter the number to search: ");
        int n = input.nextInt();
        Boolean found = false; int pos=-1;

        for (int i=0; i<size; i++)
            if (arr[i] == n) {
                pos = i;
                found = true;
                break;
            }

        if (found)  System.out.println("The given number, " + n + " exists in the array at index: " + pos);
        else  System.out.println("The given number, " + n + " does not exist in the array");
    }
}