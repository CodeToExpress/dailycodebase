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
public class pattern4 {
    public static void print(int s,int p)
    {
        int i,j;int t;
        if(p<=5)
        {
            for(i=1;i<=s;i++)
                System.out.print(' ');
            t=p;
            for(j=1;j<=p;j++)
            {
                System.out.print(t);
                t++;
            }
            t-=2;
            for(j=1;j<p;j++)
            {
                System.out.print(t);
                t--;
            }
            System.out.println();
            s--;
            p++;
            print(s,p);
        }
        else
            return;
    }
    public static void main(String []args)
    {
                print(4,1);
    }
}
