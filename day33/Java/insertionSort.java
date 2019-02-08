/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 04/02/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class insertionSort {
    public static void sort(int arr[])
    {
        int i,j,t;
        for(i=0;i<arr.length;i++)
        {
            t=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>t) 
            { 
                arr[j+1]=arr[j]; 
                j=j-1; 
            } 
            arr[j+1]=t; 
        }
        System.out.println("Sorted array is ");
        for(i=0;i<arr.length;i++)
            System.out.print(arr[i]+" ");
    }
    public static void main(String []args)
    {
        int a[]={4,2,7,5,1,6,8};
        sort(a);
    }
}
