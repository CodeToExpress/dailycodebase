# Fibonacci Series

WAP to find the nth number in fibonacci series using recursion

**Example**

```
input: 5
output: 5

input: 7
output: 13
```

## Solution

### [JavaScript Solution](./fibonacci.js)

```js
/**
 * Fibonacci Series Using Recursion
 * @author MadhavBahlMD
 * @date 18/01/2019
 */

function fibonacci (n) {
    if (n <= 2) return 1;
    return fibonacci (n-1) + fibonacci (n-2);
}

console.log ('7th element in fibonacci series is:', fibonacci(7));
```

### [Java Solution](./Fibonacci.java)

```java
import java.util.Scanner;

/**
 * Nth element of fibonacci series using recursion
 * @author MadhavBahlMD
 * @date 18/01/2019
 */

public class Fibonacci {
    public static int findElement (int num) {
        if (num <= 2)   return 1;
        return findElement(num-1) + findElement(num-2);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Fibonacci using recursion ===== */");

        // Take the input
        System.out.print("\nEnter the value of n: ");
        int n = input.nextInt();

        // Print the result
        System.out.println(n + "th number of fibonacci series is: " + findElement(n));
    }
}
```