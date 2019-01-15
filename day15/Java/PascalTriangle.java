/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package recursion;

/**
 * @date 09/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class PascalTriangle {
    public static int pascal(int r,int c)
    {
        if(r==c || c==0)
            return 1;
        else
            return pascal(r-1,c)+pascal(r-1,c-1);
    }
    public static void print(int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
                System.out.print(pascal(i,j)+" ");
            System.out.println();
        }
    }
     public static void main(String []args)
     {
         Scanner sc=new Scanner(System.in);
         int n;
         n=sc.nextInt();
         print(n);
     }
}
