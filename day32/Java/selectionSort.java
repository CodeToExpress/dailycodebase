/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 01/02/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class selectionSort {
    public static void main(String []args)
    {
        int n,i,j,t,min=0;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        for(i=0;i<n;i++)
        {
            min=i;
            for(j=i;j<n;j++)
            {
                if(arr[min]>arr[j])
                    min=j;
            }
            t=arr[i];
            arr[i]=arr[min];
            arr[min]=t;
        }
        System.out.println("The sorted array is: ");
        for(i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}
