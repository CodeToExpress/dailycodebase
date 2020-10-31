# Factorial using recursion

WAP to calculate the factorial of a given number usinig recursion

**Example**

```
input: 4
output: 24

input: 5
output: 120
```

## Solution

### [Java Solution](./Factorial.java)

```java
/**
 * Factorial using recursion
 * @author MadhavBahl
 * @date 18/01/2019
 */

import java.util.Scanner;

public class Factorial {
    public static int findFactorial (int num) {
        if (num <= 1)   return 1;
        return num*findFactorial(num-1);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("/* ===== Factorial using recursion ===== */");

        // Read the number
        System.out.print("\nEnter a number: ");
        int num = input.nextInt();

        // Print the factorial
        System.out.println("Factorial of " + num + " is = " + findFactorial(num));
    }
}
```

### [JavaScript Solution](./factorial.js)

```js
/**
 * Factorial usinig recursion
 * @author MadhavBahl
 * @date 18/01/2019
 */

function findFactorial (num) {
    if (num <= 1)  return 1;
    return num*findFactorial(num-1);
}

console.log ('Factorial of 5 is: ', findFactorial(5));
```