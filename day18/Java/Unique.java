/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 14/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class Unique {
    public static void countUniques(int arr[])
    {
        int k=1;
        for(int i=1;i<arr.length;i++)
        {
            if(arr[i]!=arr[i-1])
                k++;
        }
        System.out.println("Number of unique elements = "+k);
    }
    public static void main(String []args)
    {
        int n;int i;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number of elements");
        n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter elements of the array ");
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        countUniques(arr);
    }
}
