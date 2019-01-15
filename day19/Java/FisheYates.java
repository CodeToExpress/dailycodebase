/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 15/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class FisheYates {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n,i,rd,t;
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        for(i=n-1;i>=0;i--)
        {
                Random r = new Random();
                rd=r.nextInt(n);
                t=arr[rd];
                arr[rd]=arr[i];
                arr[i]=t;
        }
        System.out.print("Shuffled array is :");
        for(i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}
