/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package recursion;

/**
 * @date 08/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class Recmultiply {
   public static int product(int m,int n)
   {
       if (n==0)
           return 0;
       else
           return m+product(m,n-1);
   }
    public static void main(String []args)
    {
        int m,n,p;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter two numbers ");
        m=sc.nextInt();
        n=sc.nextInt();
        p=product(Math.abs(m),Math.abs(n));
       if((m<0&&n>0)||(m>0&&n<0))
           p=p*-1;
        System.out.println(p);
    }      
}
