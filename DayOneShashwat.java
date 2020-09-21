import java.util.Scanner;
public class OneDay {

	public static void main(String args[]) {
		int i,n;
		Scanner sc= new Scanner (System.in);
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
