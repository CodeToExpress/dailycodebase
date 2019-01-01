/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 01/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class minSubstring {
    
    public static boolean check (String s,char []c)
    {
        String str=new String(c);int k=0;
        for(int i=0;i<c.length;i++)
        {
            if(s.contains(str.substring(i,i+1)))
              k++;  
        }
        if(k==c.length)
            return true;
        else
            return false;
    }
    
    public static void generate(String str,char c[]) {
        String s;int min;
        min=str.length();String s1="";
        for(int i=0;i<=str.length()-1;i++)
        {
            for(int j=i+1;j<=str.length();j++)
            {
                s=str.substring(i,j);
                if(check(s,c)==true)
                {
                    if(min>=s.length())
                    {
                        min=s.length();
                        s1=s;
                    }
                }
            }
        }
        System.out.println(s1);
    }
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s;int i,n;
        System.out.println("Enter a string");
        s=sc.next();
        System.out.println("Enter size of character array");
        n=sc.nextInt();
        char a[]=new char[n];
        for(i=0;i<n;i++)
            a[i]=sc.next().charAt(0);
        generate(s,a);
    }
}

