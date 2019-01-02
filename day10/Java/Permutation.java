/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 02/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class Permutation {
    public static void permute(char []arr,int size,int n)
    {
        char b;int i;
        if(size==1)
        {
            for(i=0;i<n;i++)
                System.out.print(arr[i]);
            System.out.println();
        }
        for(i=0;i<size;i++)
        {
            permute(arr,size-1,n);
            if(size%2==1)
            {
                b=arr[0];
                arr[0]=arr[size-1];
                arr[size-1]=b;
            }
            else
            {
                b=arr[i];
                arr[i]=arr[size-1];
                arr[size-1]=b;
            }
        }
    }
    public static void main(String []args)
    {
        String s;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter string");
        s=sc.next();
        char []arr=s.toCharArray();
        System.out.println("The permutations are ");
        permute(arr,arr.length,arr.length);
    }
}
