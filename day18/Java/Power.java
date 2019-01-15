/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 14/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class Power {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n,p;int i,j;int k=0;
        System.out.println("Enter size of the array ");
        n=sc.nextInt();
        ArrayList<Integer> arr1 = new ArrayList<Integer>(n);
        ArrayList<Integer> arr2 = new ArrayList<Integer>(n);
        System.out.println("Enter elements of the first array ");
        for(i=0;i<n;i++)
            arr1.add(sc.nextInt());
        System.out.println("Enter elements of the second array ");
        for(i=0;i<n;i++)
            arr2.add(sc.nextInt());
        System.out.println("Enter power");
        p=sc.nextInt();
        for(i=0;i<n;i++)
        {
            int t=(int)(Math.pow(arr1.get(i),p));
            if(arr2.contains(t))
                k++;
        }
        if(k==n)
            System.out.println("true");
        else
            System.out.println("false");
    }
}
