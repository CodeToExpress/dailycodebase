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
public class cartesianProd {
    public static void prod(int n,int arr2[])
    {
        for(int i=0;i<arr2.length;i++)
            System.out.println("{"+n+","+arr2[i]+"}");
    }
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of the 2 sets");
        int m=sc.nextInt();
        int n=sc.nextInt();
        int arr1[]=new int[m];
        int arr2[]=new int[n];
        System.out.println("Enter elements for first set");
        for(int i=0;i<m;i++)
            arr1[i]=sc.nextInt();
        System.out.println("Enter elements for second set");
        for(int i=0;i<n;i++)
            arr2[i]=sc.nextInt();
        for(int i=0;i<m;i++)
            prod(arr1[i],arr2);
    }
}
