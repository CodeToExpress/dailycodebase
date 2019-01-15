/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package recursion;

/**
 * @date 14/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class nQueen {
    static int n;
    public static void print(int arr[][])
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                System.out.print(arr[i][j]);
            System.out.println();
        }
    }
    
    public static boolean safe(int arr[][],int r,int c)
    {
        int i,j;
        for(i=0;i<c;i++)
            if(arr[r][i]==1)
                return false;
        for(i=r, j=c; i>=0 && j>=0; i--,j--)
            if(arr[i][j]==1)
                return false;
        for(i=r, j=c; i<n && j>=0; i++,j--)
            if(arr[i][j]==1)
                return false;
        return true;
    }
    
    public static boolean placeQueen(int arr[][],int c)
    {
        int i;
        if(c>=n)
            return true;
        for(i=0;i<n;i++)
        {
            if(safe(arr,i,c))
            {
                arr[i][c]=1;
                if(placeQueen(arr,c+1)==true)
                    return true;
                arr[i][c]=0;
            }
        }
        return false;
    }
    
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int arr[][]=new int[n][n];
        if(placeQueen(arr,0)==false)
        {
            System.out.println("All the queens cannot be placed");
        }
        else
            print(arr);
    }
}
