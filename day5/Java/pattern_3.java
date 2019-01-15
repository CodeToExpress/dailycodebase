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
public class pattern3 {
    public static void main(String []args)
    {
        int i,j;int k=0;
        int t=5/2;
        t++;
        for(i=1;i<=5;i++)
        {
            if(i<=t)
                k++;
            else
                k--;
            for(j=1;j<=k;j++)
            {
                System.out.print(j);
            }
            System.out.println();
        }
    }
}
