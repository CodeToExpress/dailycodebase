/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 31/12/18
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class Levenshtein {
    public static int leven_dist(char []s,char []t)
    {
        int d[][]=new int[s.length+1][t.length+1];
        int i,j;int sub;int a,b,c;
        for(i=0;i<=s.length;i++)
        {
            for(j=0;j<=t.length;j++)
            {
                d[i][j]=0;
            }
        }
        for(i=1;i<=s.length;i++)
            d[i][0]=i;
        for(j=1;j<=t.length;j++)
            d[0][j]=j;
        for(j=1;j<=t.length;j++)
        {
            for(i=1;i<=s.length;i++)
            {
                if(s[i-1]==t[j-1])
                {
                    d[i][j]=d[i-1][j-1];
                }
                else
                {
                    a=d[i-1][j-1]+1;
                    b=d[i][j-1]+1;
                    c=d[i-1][j-1]+1;
                    //System.out.println(a+" "+b+" "+c);
                    d[i][j]=Math.min((Math.min(a,b)),c);
                }
            }
        }
        return d[s.length][t.length];
    }
    public static void main(String []args)
    {
        String s1,s2;int dist;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter two strings ");
        s1=sc.nextLine();
        s2=sc.nextLine();
        char s[]=s1.toCharArray();
        char t[]=s2.toCharArray();
        if(s.length<t.length)
            dist=leven_dist(s,t);
        else
            dist=leven_dist(t,s);
        System.out.println("Minimum no of operations are "+dist);
    }
}
