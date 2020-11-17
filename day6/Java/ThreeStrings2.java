/* @date 16/10/2020
 * @author Shashwat Gupta (shashwatxdevelop)
 */
import java.util.Scanner;
public class ThreeStrings2 {

	public static void main(String[] args) {
		String s, s1=" ", s2=" "; int i, l; char ch;
		Scanner sc = new Scanner (System.in);
		System.out.println("Enter a string");
		s = sc.nextLine();
		s=s+' ';
		l= s.length();
		
		for (i=0; i<l;i++)
		{
			ch = s.charAt(i);
			if(ch ==' ')
			{
				s2= s2+' '+s1;
				s1=" ";
			}
			else
				s1 =ch+s1;
			
		}
		System.out.println(s2);
	}

}

