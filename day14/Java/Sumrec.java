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
public class Sumrec {
    public static int sum(int n)
    {
        if(n==0)
            return 0;
        else
            return n%10+sum(n/10);
    }
   public static void main(String []args)
   {
       int n,s;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter a number");
       n=sc.nextInt();
       s=sum(n);
       System.out.println(s);
   }
}
