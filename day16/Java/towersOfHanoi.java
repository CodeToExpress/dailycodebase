/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package recursion;

/**
 * @date 10/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class towersOfHanoi {
    public static void move(int n,char s,char d,char c)
    {
        if(n==1)
        {
            System.out.println("Move disk "+n+" from "+s+" to "+d);  
            return;
        }
        else
        {
            move(n-1,s,c,d);
            System.out.println("Move disk "+n+" from "+s+" to "+d);
            move(n-1,c,d,s);
        }
    }
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n; char start='S';char center='C'; char destination='D';
        System.out.println("Enter number of disks");
        n=sc.nextInt();
        move(n,start,destination,center);
    }
    }
