# Sum Squares

WAP to print the sum of the series 12+22+32 up to n terms

## Solution

### [Java Implementation](./SumSquares.java)

```java
import java.util.Scanner;

public class SumSquares {
    public static int sum (int n) {
        if (n <= 0) return 0;
        else return (n*n) + sum(n-1);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("/* ===== Sum of squares of n natural numbers ===== */");
        System.out.print("\nEnter the number n: ");
        int n = input.nextInt();
        System.out.println("sum of squares of " + n + " natural numbers = " + sum(n));
    }
}
```