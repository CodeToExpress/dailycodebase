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
public class Common2 {
    public static void findcommon(int a[],int b[])
    {
        int i=0,j=0;
        while(true)
        {
            if(a[i]>b[j])
                j++;
            else if(a[i]<b[j])
                i++;
            else
            {
                if(i==0||j==0)
                    System.out.print(a[i]+" ");
                if(i!=0 && a[i]!=a[i-1] && j!=0 && b[j]!=b[j-1])
                {
                    System.out.print(a[i]+" ");
                    i++;
                    j++;
                }
                else
                {
                    i++; j++;
                }
            }
            if(i==a.length || j==b.length)
                break;
        }
    }
    public static void main(String []args)
    {
        int n,m,i;
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
        System.out.println("Common elements are ");
        Arrays.sort(a);
        Arrays.sort(b);
        findcommon(a,b);
    }
}
