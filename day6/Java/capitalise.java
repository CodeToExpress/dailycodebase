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
public class capitalise {
    public static void main(String []args)
    {
        String s;int i,j;char b;String str="";
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string");
        s=sc.nextLine();
        String arr[]=s.split(" ");
        for(i=0;i<arr.length;i++)
        {
            str="";
            for(j=0;j<arr[i].length();j++)
            {
               b=arr[i].charAt(j);
               if(j==0)
                   b=Character.toUpperCase(b);
               str=str+b;
            }
            System.out.print(str+" ");
        }
    }
}
