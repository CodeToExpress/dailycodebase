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
public class Freq {
   public static void main(String []args)
   {
       int n;int i;int t;int k=0;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter number of elements in the array ");
       n=sc.nextInt();
       int arr[]=new int[n];
       System.out.println("Enter elements of the array ");
       for(i=0;i<n;i++)
           arr[i]=sc.nextInt();
       Arrays.sort(arr);
       if(n!=1){
        if(arr[0]==arr[1])
           k=1;
       }
       else
           System.out.println("frequency of "+arr[0]+" is "+1);
       for(i=1;i<n;i++)
       {
           if(arr[i]==arr[i-1])
               k++;
           else
           {
               System.out.println("frequency of "+arr[i-1]+" is "+k);
               k=1;
           }
       }
       if(n!=1)
       System.out.println("frequency of "+arr[i-1]+" is "+k);
   }
}
