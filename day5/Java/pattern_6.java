/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package patterns;

/**
 *
 * @author SPREEHA DUTTA
 */
public class pattern6 {
    static int n=3;
    public static void print(int k,int i)
    {
        int j;
        for(j=1;j<=k;j++)
            System.out.print(' ');
        for(j=1;j<=i;j++)
            System.out.print('*');
        //System.out.println();
    }
    public static void printdown(int k,int i)
    {
        int j;
        for(j=1;j<=k;j++)
            System.out.print(' ');
        for(j=1;j<=i;j++)
            System.out.print('*');
        //System.out.println();
    }
    public static void printrow(int i)
    {
        int k;int j;
        k=n-i;
        while(i<=n)
        {
            print(k,i);
            k--;
            i+=2;
            System.out.println();
        }
        //k++;
        while(i>=1)
        {
            printdown(k,i);
            k++;
            i-=2;
            System.out.println();
        }
    }
    public static void main(String []args)
    {
        printrow(1);
    }
    
}
