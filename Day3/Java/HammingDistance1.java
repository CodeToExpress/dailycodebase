/* @date 4/09/2020
 * @author Shashwat Gupta (shashwatxdevelop)
 */
import java.util.Scanner;
public class HammingDistance {

	public static void main(String[] args) {
		String s1, s2; int l1, l2, i, k=0; char ch = 0;
		Scanner sc= new Scanner (System.in);
		s1 = sc.nextLine();  //inputing string 1
		s2 = sc.nextLine();  // imputing string 2
		l1 = s1.length();    // finding length of string 1
		l2 = s2.length();    // finding length of string 2
		
		if(l1==l2)        // comparing both lengths of strings because hamming distance works only on same length of string
		{
			for (i=0 ; i<l1; i++)   // for loop for extraction of characters from both of the strings
			{ 
				if (s1.charAt(i)== s2.charAt(i))  // checking same character of both strings
					k = k;                       // if same character is found no change in counter variable k 
				else
					k =k+1;                        // for different character variable k will be increased by 1
			}
		}
		System.out.println("Hamming Distance is " + k);   // printing the hamming distance
	}

}

