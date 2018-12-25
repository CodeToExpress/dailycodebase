/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 *
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class max_freq {
   
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        String s;int i,j;char b;char ch=' ';
        
        System.out.println("Enter string ");
        s=sc.nextLine();
        
        int k=0,max=0;String str="";
           for(i=0;i<s.length();i++)
           {
               b=s.charAt(i);k=0;
               for(j=0;j<s.length();j++)
               {
                  if(s.charAt(j)==b) 
                      k++;
                  else
                     str=str+s.charAt(j);
               }
               s=str;
               str="";
               if(max<k)
               {
                   max=k;
                   ch=b;
               }
           }
        System.out.println("Character with maximum frequency is "+ch);
    }
}
