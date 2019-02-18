# Calculating exponent using recursion

WAP to calculate `a` raised to the power `n` using recursion

**Exaple**

```
input: a = 10, n = 2
output: 100
```

## Solution 

### [Java Implementation](./Power.java)

```java
/**
 * @author @MadhavBahlMD
 * @date 18/01/2019
 */

import java.util.Scanner;

public class Power {
    public static double findPower (double a, double n) {
        if (n <= 0)
            return 1;
        return a*findPower(a, n-1);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Exponent ===== */");

        // Input the base and exponent
        System.out.print("\nEnter a: ");
        double a = input.nextDouble();
        System.out.print("Enter n: ");
        double n = input.nextDouble();

        // Find and print the power
        double power = findPower(a, n);
        System.out.println(a + " raised to the power " + n + " is = " + power);
    }
}
```

### [JavaScript Solution](./power.js)

```js
/**
 * Finding `a` raised to the power `n` rercursively
 * @author MadhavBahlMD
 * @date 18/01/2019
 */

function findPower (a, n) {
    if (n <= 0)
        return 1;
    return a*findPower (a, n-1);
}

console.log ('5^2 = ', findPower (5, 2));
```