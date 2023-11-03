/* @date 14/10/2020
 * @author Shashwat Gupta (shashwatxdevelop)
 */
import java.util.Scanner;
public class Pattern__2 {

	public static void main(String[] args) {
		int i,j,n, s=0;
		Scanner sc = new Scanner (System.in);
		n= sc.nextInt();
		for (i=1; i<=n; i++)
		{
			for (j=1; j<=i; j++)
			{
				s=s+1;
				System.out.print(s+" ");
			}
			System.out.println();
		}

	}

}
