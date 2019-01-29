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
public class pattern5 {
    public static void main(String []args)
    {
        int n=4;
        int i,j;int k=0;int p=(n*2-1);
        for(int t=1;t<=n;t++)
        {
        for(j=1;j<=k;j++)
                System.out.print(' ');
        k++;
        for(i=1;i<=p;i++)
        {
            System.out.print('*');
        }
        p-=2;
        System.out.println();
        }
    }
}
