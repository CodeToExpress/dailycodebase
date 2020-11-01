/*
 * @author thefluffyoshi
 * date: 31/10/2020
 */

import java.util.Scanner;

public class linearSearch_thefluffyoshi
{
    public static void main(String []args)
    {
        //vars
        int arr_size, i, searchnum, storeNum = -2;

        //Array size
        System.out.print("Enter an array size: ");
        Scanner arr_scan = new Scanner(System.in);
        arr_size = arr_scan.nextInt();

        //Storing the size into an array
        int array[] = new int[arr_size];

        //Putting in the array elements based on the size of the array
        for (i = 0; i < arr_size; i++)
        {
            System.out.print("Enter the elements inside the array: ");
            array[i] = arr_scan.nextInt();
        }//end input elements inside array

        //Specific element/number to be found in the array
        System.out.print("Enter element to be found: ");
        searchnum = arr_scan.nextInt();
        for (i = 0; i < arr_size; i++)
        {
            if (array[i] == searchnum)
            {
                storeNum = i;
                break;
            }//end searching for specific num
        }//end for loop to search

        //Confirmation if specific element is inside array or not and at what position instead of index
        if (storeNum != -2)
        {
            System.out.println("Output at position: " + storeNum + 1);
        }//end comparing if storeNum was changed
        else
        {
            System.out.println("Output: undefined");
        }//end if storeNum stayed the same
    }//end main
}//end linearSearch class
