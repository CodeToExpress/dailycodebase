/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package day22;

/**
 * @date 29/01/2019
 * @author nehabindal
 */
import java.util.*;
public class day22 {
    public static void main(String[] args)
    {
        System.out.println("Input a string to check it it's a pallindrome or not");
        Scanner sc = new Scanner(System.in);
        String st = sc.nextLine();
        int l = st.length();
        int flag=0;
        for(int i=0;i<l/2;i++)
        {
            if(st.charAt(i)!=st.charAt(l-1-i))
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            System.out.println("Not a pallindrome");
        }
        else{
            System.out.println("Yay a pallindorme");
        }
                
    }
    
}
