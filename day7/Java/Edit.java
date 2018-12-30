
package javaapplication3;
/**
 * @date 28/12/18
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class Edit {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        String s1,s2;int l,c=0;char b;int i;
        System.out.println("Enter two strings ");
        s1=sc.next();
        s2=sc.next();
        
        if(Math.abs(s1.length()-s2.length())<=1)
        {
            if(s1.length()<s2.length())
                l=s1.length();
            else
                l=s2.length();
            for(i=0;i<l;i++)
            {
                if(s1.charAt(i)==s2.charAt(i))
                    c++;
            }
            if((c==l)||((c+1)==l && (s1.length()==s2.length())))
                System.out.println(s1+" and "+s2+" are one edit away");
            else
                System.out.println(s1+" and "+s2+" are not one edit away ");
        }
        else
                System.out.println(s1+" and "+s2+" are not one edit away ");
    }
}
