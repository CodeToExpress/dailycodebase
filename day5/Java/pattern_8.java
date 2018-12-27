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
public class pattern8 {
    public static void main(String []args)
    {
        int n=3;
        int i,j,t,k;int l=1;
        t=n*2;
        for(i=1;i<=n;i++)
        {
            k=t-2*i;
            for(j=i;j>=1;j--)
            {
                System.out.print('*');
            }
            l=1;
            while(l<=k)
            {
                System.out.print(' ');
                l++;
            }
            for(j=1;j<=i;j++)
                System.out.print('*');
            System.out.println();
        }
        
        for(i=n;i>=1;i--)
        {
            k=t-2*i;
            for(j=i;j>=1;j--)
            {
                System.out.print('*');
            }
            l=1;
            while(l<=k)
            {
                System.out.print(' ');
                l++;
            }
            //System.out.print(' ');
            for(j=1;j<=i;j++)
                System.out.print('*');
            System.out.println();
        }
        
    }
}
