/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 03/01/1998
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class longestCommonSubstring {
   static int max=0;static String sm;
    public static void generate(String s,String st)
    {
        String str;
        for(int i=0;i<=s.length()-1;i++)
        {
            for(int j=i+1;j<=s.length();j++)
            {
                str=s.substring(i,j);
                if(st.contains(str))
                {
                   if(max<str.length())
                   {
                       max=str.length();
                       sm=str;
                   }
                }
            }
        }
    }
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        String s1,s2;
        System.out.println("Enter the two strings ");
        s1=sc.next();
        s2=sc.next();
        generate(s1,s2);
        generate(s2,s1);
        System.out.println("Longest common substring is "+sm);
    }
}
