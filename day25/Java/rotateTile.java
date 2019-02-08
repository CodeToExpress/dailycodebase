/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 3/02/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class rotateTile {
    public static int[][] rotate(int arr[][])
    {
        int i,j,ri=0;
        int rj=arr.length-1;
        int rot[][]=new int[arr.length][arr.length];
        for(i=0;i<arr.length;i++)
        {
            for(j=0;j<arr.length;j++)
            {
                rot[ri][rj]=arr[i][j];
                ri++;
            }
            rj--; ri=0;
        }
        return rot;
    }
    public static void main(String []args)
    {
        int n,i,j;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int ri=0,rj=n-1;
        int arr[][]=new int[n][n];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                arr[i][j]=sc.nextInt();
        System.out.println("Original matrix is ");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
        int rot[][]=rotate(arr);
        System.out.println("Rotated matrix is ");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                System.out.print(rot[i][j]+" ");
            }
            System.out.println();
        }
    }
}
