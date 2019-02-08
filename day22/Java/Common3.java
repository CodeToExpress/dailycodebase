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
public class Common3 {
    public static void findcommon(int a[],int b[],int c[])
    {
        int i=0,j=0,k=0;
        while(true)
        {
            if(a[i]==b[j] && b[j]==c[k])
                System.out.print(a[i]+" ");
            if(a[i]<b[j])
                i++;
            else if(b[j]<c[k])
                j++;
            else
                k++;
            if(i==a.length || j==b.length || k==c.length)
                break;
        }
    }
    public static void main(String []args)
    {
        int n,m,k,i;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of first array ");
        n=sc.nextInt();
        int a[]=new int[n];
        for(i=0;i<n;i++)
            a[i]=sc.nextInt();
        System.out.println("Enter size of second array ");
        m=sc.nextInt();
        int b[]=new int[m];
        for(i=0;i<m;i++)
            b[i]=sc.nextInt();
        System.out.println("Enter size of third array ");
        k=sc.nextInt();
        int c[]=new int[k];
        for(i=0;i<k;i++)
            c[i]=sc.nextInt();
        System.out.println("Common elements are ");
        findcommon(a,b,c);
    }
}
