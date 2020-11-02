/* @date 13/10/2020
 * @author Shashwat Gupta (shashwatxdevelop)
 */
import java.util.Scanner;
public class VowelsInAString {

	public static void main(String[] args) {
		String s; int k = 0, l, i; char ch = 0;
		Scanner sc = new Scanner (System.in);
		System.out.println("Enter the string");
        s = sc.nextLine();     //taking input as string
        l = s.length();        //finding length of the string
        for (i=0; i<l; i++)
        {
        	ch= s.charAt(i); //extracting the character from the string
        	if(ch=='a' || ch == 'A' || ch == 'e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch== 'O'|| ch=='u' || ch=='U')
        	{
        		k++; //increasing the counter variable by 1 if vowel is found
        	}
        	
        }
        System.out.println("Number of vowels in the string is " + k); //printing the total number of vowels in the string
	}

}
