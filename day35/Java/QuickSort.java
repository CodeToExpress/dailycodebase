import java.util.*;
import static org.junit.Assert.*;
import org.junit.Test;

public class QuickSort {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<arr.length;i++){
            System.out.println("Enter next int");
            arr[i]=sc.nextInt();

        }
        quickSort(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
    public static void quickSort (int [] input){
        int left = 0;
        int right = input.length-1;
        if (left < right){
            int position =partition(input, left, right);

            quickSort(input, left, position-1);
            quickSort(input, position+1, right);

        }

    }
    private static int partition(int[] input, int left, int right){

        int pivot = input[right];
        int low = left -1;
        for (int i = left; i <right ; i++) {
            if (input[i] <= pivot){
                low ++;
                swap(input, i, low);
            }
        }
        swap(input, right, low+1);
        return low + 1;
    }
    private static void swap (int [] input, int i, int low){
        int temp = input[i];
        input[i] = input[low];
        input[low] = temp;
    }
    public void testQuickSort (){
        int [] test = {8,4,23,42,16,15};
        quickSort(test);
        int [] expect = {4,8,15,16,23,16};
        assertArrayEquals(expect, test);

        int [] test2 = {100, 75, 50, 25, 0};
        quickSort(test2);
        int [] expect2 = {0,25,50,75,100};
        assertArrayEquals(expect2, test2);
    }

}