/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 30/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class naive {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        String s,p;int i,j;String str;int c=0;
        s=sc.next();
        System.out.println("Enter pattern ");
        p=sc.next();
        for(i=0;i<s.length()-p.length();i++)
        {
            str=s.substring(i,i+p.length());
            if(str.equals(p))
            {
                System.out.println(i); c=1;
                break;
            }
        }
        if(c==0)
            System.out.println("Pattern not found");
    }
}
