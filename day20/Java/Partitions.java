/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 16/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class Partitions {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n,p,i,j;int k=0;
        System.out.println("Enter size of original array");
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        System.out.println("Enter size of partition");
        p=sc.nextInt();
        for(i=0;i<arr.length;i=i+p)
        {
            int part[]=Arrays.copyOfRange(arr,i,i+p);
            k++;
            if(arr.length%2!=0 && k==(arr.length/p+1))
                p=arr.length%p;
            System.out.print("{ ");
            for(j=0;j<p;j++)
                System.out.print(part[j]+" ");
            System.out.print("}\n");
        }
    }
}
