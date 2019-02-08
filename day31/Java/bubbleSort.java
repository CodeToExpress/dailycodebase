/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 31/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class bubbleSort {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n,i,j;int t;
        n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter array");
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    t=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=t;
                }
            }
        }
        System.out.println("Sorted array is :");
        for(i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}
