/*
 * @author thefluffyoshi
 * date: 31/10/2020
 */

import java.util.Scanner;

public class bubbleSort_thefluffyoshi
{
    public static void main (String[] args)
    {
        int arr_size, i, j, swapNum;

        //Enter how big the array is
        System.out.print("Enter an array size: ");
        Scanner arr_scan = new Scanner(System.in);
        arr_size = arr_scan.nextInt();

        int array[] = new int[arr_size];

        //The array numbers
        for (i = 0; i < arr_size; i++)
        {
            System.out.print("Enter the elements inside the array: ");
            array[i] = arr_scan.nextInt();
        }//end for loop

        //Bubble sort
        for (i = 0; i < arr_size-1; i++)
        {
            for (j = 0; j < arr_size-i-1; j++)
            {
                if (array[j] > array[j+1])
                {
                    swapNum = array[j];
                    array[j] = array[j+1];
                    array[j+1] = swapNum;
                }
            }
        }

        //End sort
        System.out.print("Sorted array: ");
        for (i = 0; i < arr_size; i++)
        {
            System.out.print(array[i] + " ");
        }
    }//end main
}//end class