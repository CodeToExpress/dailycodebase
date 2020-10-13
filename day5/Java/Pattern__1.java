/* @date 25/09/2020
 * @author Shashwat Gupta (shashwatxdevelop)
 */
import java.util.Scanner;

public class Pattern__1 {

	public static void main(String[] args) {
		int i,j,n;
		Scanner sc = new Scanner (System.in);
				n= sc.nextInt();
		for(i=1; i<=n; i++)
		{
			for (j=1; j<=i;j++)
			{
				System.out.print(j+" ");
			}
			System.out.println();
		}

	}

}
