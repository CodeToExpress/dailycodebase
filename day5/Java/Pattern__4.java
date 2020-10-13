/* @date 25/09/2020
 * @author Shashwat Gupta (shashwatxdevelop)
 */
import java.util.Scanner;
public class Pattern__4 {

	public static void main(String[] args) {
		int i,j,n;
		Scanner sc =new Scanner (System.in);
		n= sc.nextInt();
		
       
        	for (i=1; i<=n; i++)
        	{
        		for (j=n; j>i; j--)
        		{
        			System.out.print(" ");
        		}
        	
        	for (j=i; j<=(2*i-1); j++)
        	{
        		System.out.print(j+" ");
        	}
        	for (j=(2*i-1) - 1; j>=i; j--)
        	{
        		System.out.print(j+" ");
        	}
        	System.out.println(" ");
        }
	}
}


