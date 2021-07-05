/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 28/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class pairSum {
    public static int[] pairSum(int arr[],int s)
    {
        HashSet<Integer> h=new HashSet<Integer>();
        int a[]=new int[2];int t;
        int i;
        for(i=0;i<arr.length;i++)
        {
            t=s-arr[i];
            if(t>=0 && h.contains(t))
            {
                a[0]=t;
                a[1]=arr[i];
                break;
            }
            h.add(arr[i]);
        }
        return a;
    }
    public static void main(String []args)
    {
        int n,i;int sum;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        System.out.println("Enter pair sum");
        sum=sc.nextInt();
        int a[]=pairSum(arr,sum);
        if(a[1]==0 && a[0]==0)
            System.out.println("[]");
        else
            System.out.println("["+a[0]+","+a[1]+"]");
    }
}
