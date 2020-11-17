/* @date 16/10/2020
 * @author Shashwat Gupta (shashwatxdevelop)
 */
import java.util.Scanner;
public class ThreeStrings1 {

	public static void main(String[] args) {
		String s, s1=""; char ch, ch1; int l,i; 
		Scanner sc = new Scanner (System.in);
             s = sc.nextLine();
             s = ' '+ s;
             l= s.length();
             for(i=0; i<l; i++)
             {
            	 ch = s.charAt(i);
            	 if(ch == ' ')
            	 {
            		 ch1= s.charAt(i+1);
            		 s1 = s1+' '+ Character.toUpperCase(ch1);
            		 i=i+1;
            	 }
            	 else
            		 s1=s1+ch;
             }
             System.out.println("New string after changing the first character of every word to uppercase:");
             System.out.println(s1);
	}