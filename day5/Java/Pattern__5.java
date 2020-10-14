/* @date 14/10/2020
 * @author Shashwat Gupta (shashwatxdevelop)
 */
import java.util.Scanner;
public class Pattern__5 {

	public static void main(String[] args) {
		int i,j,k,n, p=1;
		Scanner sc = new Scanner (System.in);
		n= sc.nextInt();
		for(i=1; i<=n;i++)
		{
			for (j=1; j<i; j++)
			{
				System.out.print(" ");
			}
			for (j=1; j<= (2*n-(2*i-1)); j++)
			{
				System.out.print("*");
			}
			System.out.println("");
			
		

	}

}
}

