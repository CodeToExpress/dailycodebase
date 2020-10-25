# Natural Sum

WAP to sum first `n` natural numbers

## Solution 

### [Java Solution](./NaturalSum.java)

```java
/**
 * Natural Sum using recursion
 * @author MadhavBahl
 * @date 26/01/2019
 */

import java.util.Scanner;

public class NaturalSum {
    public static int naturalSum (int n) {
        if (n <= 0) return 0;
        else return n+naturalSum(n-1);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("/* ===== Sum N Natural Numbers ===== */");
        System.out.print("\nEnter a natural number n: ");
        int n = input.nextInt();
        System.out.println("The sum of first " + n + " natural numbers = " + naturalSum(n));
    }
}
```