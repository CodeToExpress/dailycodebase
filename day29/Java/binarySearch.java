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
public class binarySearch {
    public static int search(int []arr,int p,int l,int r)
    {
        int mid=0;
        if(r>=l)
        {
          mid=(l+r)/2;  
        if(p==arr[mid])
            return mid;
        else if(p>arr[mid])
            return search(arr,p,mid+1,r);
        else
            return search(arr,p,l,mid-1);
        }
        return -1;
    }
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n,i;int p,f;
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        System.out.println("Enter element to be searched");
        p=sc.nextInt();
        f=search(arr,p,0,arr.length-1);
        if(f==-1)
            System.out.println("undefined");
        else
            System.out.println(f);
    }
}
