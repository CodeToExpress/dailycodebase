/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 29/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class maxSubarray {
    public static int findmax(int []arr,int n)
    {
        int max=0;int i;int s=0;
        for(i=0;i<=arr.length-1;i++)
        {
            if(i<n)
            {
                s=s+arr[i];
                max=s;
            }
            else
            {
                s=s-arr[i-n];
                s=s+arr[i];
                if(max<s)
                    max=s;
            }
        }
        return max;
    }
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n,i,p;int max;
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        System.out.println("Enter number of consecutive elements");
        p=sc.nextInt();
        max=findmax(arr,p);
        System.out.println("Maximum consecutive sum of "+p+" consecutive elements are "+max);
    }
}
