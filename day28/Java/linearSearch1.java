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
public class linearSearch1 {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n;int i;int p,c=-1;
        System.out.println("Enter size and array elements");
        n=sc.nextInt();   
        int arr[]=new int[n];
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        System.out.println("Enter element to be found");
        p=sc.nextInt();
        for(i=0;i<n;i++)
           if(arr[i]==p) 
           {
               c=i;
               break;
           }
        if(c!=-1)
            System.out.println(c);
        else
            System.out.println("undefined");
    }
}
