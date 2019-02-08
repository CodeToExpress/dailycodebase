/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 03/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class circularRotation {
    public static boolean circular(List a1,List a2)
    {
        int p;int c=0;int i,j=0;
        if(a1.size()!=a2.size())
            return false;
        else
        {
           p=a2.indexOf(a1.get(0)); 
           if(p!=-1)
           {
               for(i=p;i<a2.size();i++)
               {
                   if(a2.get(i)==a1.get(j))
                   {
                       c++;
                       j++;
                   }
                   else
                       break;
               }
               for(i=0;i<p;i++)
               {
                   if(a2.get(i)==a1.get(j))
                   {
                       c++; j++;
                   }
                   else
                       break;
               }
           }
               if(c==a1.size())
                   return true;
               else
                   return false;
        }
            
    }
   public static void main(String []args)
   {
       Scanner sc=new Scanner(System.in);
       int m,n,i;
       ArrayList<Integer> a = new ArrayList<Integer>();
       ArrayList<Integer> a2 = new ArrayList<Integer>();
       System.out.println("Enter size and insert elements into first array ");
       m=sc.nextInt();
       for(i=0;i<m;i++)
          a.add(sc.nextInt()); 
       System.out.println("Enter size and insert elements into second array ");
       n=sc.nextInt();
       for(i=0;i<n;i++)
          a2.add(sc.nextInt());
       boolean res = circular(a,a2);
       System.out.println(res);
   }
}
