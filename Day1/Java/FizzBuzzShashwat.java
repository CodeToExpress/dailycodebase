/* @date 22/09/2020
 * @author Shashwat Gupta 
 */
import java.util.Scanner;
public class FizzBuzzShashwat {

	public static void main(final String args[]) {
        int i, n;
        final Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number");
		n = sc. nextInt();
		for (i=1; i<=n; i++)
		{
			if(i%3==0 && i%5==0)
			{
				System.out.print("FizzBuzz," );
			}
			else if(i%5==0)
			{
				System.out.println("Buzz, ");
			}
			else if (i%3==0)
			{
				System.out.print("Fizz, ");
			}
			else
			{
				System.out.print(i+" , ");
		}
}
}
}
