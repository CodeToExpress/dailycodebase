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
public class reverse_word {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        String s;int i,j;String str="";char b;
        
        System.out.println("Enter a string ");
        s=sc.nextLine();
        String arr[]=s.split(" ");
        for(i=0;i<arr.length;i++)
        {
            str="";
            for(j=0;j<arr[i].length();j++)
            {
                b=arr[i].charAt(j);
                str=b+str;
            }
            System.out.print(str+" ");
        }
    }
}
