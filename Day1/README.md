# Day 1 -- The Fizz Buzz Challenge

**Brief History** - Fizz Buzz is a group word game for children to teach them about division. Players take turns to count incrementally, replacing any number divisible by three with the word "fizz", and any number divisible by five with the word "buzz" and any number divisible by both three and five is replaced with the word "fizzbuzz"

> For example, a typical round of fizz buzz would start as follows:
> 1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, Fizz Buzz, 16, 17, Fizz, 19, Buzz, Fizz, 22, 23, Fizz, Buzz, 26, Fizz, 28, 29, Fizz Buzz, 31, 32, Fizz, 34, Buzz, Fizz, …

**Question**- Write a program that prints the numbers from 1 to n and for multiples of '3' print "Fizz" instead of the number, for the multiples of '5' print "Buzz", and for the numbers which are divisible by both 3 and 5, print FizzBuzz.

![Fizz Buzz](./cover.png)

## JavaScript Implementation

### [Solution 1](./JavaScript/sol1.js)

```js
/**
 * @author MadhavBahlMD
 * @date 20/12/2018
 */

 // Method 1 (The general approach)
// Step 1: Run a loop from 1 to n, for reach iteration (i) perform the next steps
// Step 2: if i is divisible by both 3 and 5, print “FizzBuzz”
// Step 3: if above condition fails, and i is divisible by 3, print “Fizz”
// Step 4: if above condition fails, and i is divisible by 5, print “Buzz”
// Step 5: if all conditions fails, print i itself.

function fizzbuzz (num) {
    for (let i=1; i<=num; i++) {
        if (i%3 === 0 && i%5 === 0)
            console.log ("FizzBuzz");
        else if (i%3 === 0)
            console.log ("Fizz");
        else if (i%5 === 0)
            console.log ("Buzz");
        else
            console.log (i);
    }
}

fizzbuzz (17);
```

### [Solution 2](./JavaScript/sol2.js)

```js
/**
 * @author MadhavBahlMD
 * @date 20/12/2018
 */

// Step 1: Run a loop from 1 to n, for reach iteration (i) perform the next steps
// Step 2: Declare a temporary empty string (inside loop, say output) 
// Step 3: If i is divisible by 3, append Fizz to the output.
// Step 4: If i is divisible by 5, append Buzz to the output.
// Step 5: If output is still an empty string, set it equal to i
// Step 6: Print output.

function fizzbuzz (num) {
    for (let i=1; i<=num; i++) {
        let opStr = '';

        if (i%3 === 0)  opStr += 'Fizz';
        if (i%5 === 0)  opStr += 'Buzz';

        if (opStr === '')  opStr = i;
        
        console.log (opStr);
    }
}

fizzbuzz (17);
```

## Java Implementation

### [Solution 1](./Java/Fizzbuzz.java)

```java
/**
 * @author: MadhavBahlMD
 * @date: 20/12/2018
 */
 
import java.util.Scanner;

public class Fizzbuzz {
    public static void main(String[] args) {

        System.out.println("/* ===== Fizz Buzz ===== */");
        Scanner input = new Scanner(System.in);
        System.out.print("\nEnter a number: ");
        int n = input.nextInt();
        for (int i=1; i<=n; i++) {
            if (i%3 == 0 && i%5 == 0) {
                System.out.println("FizzBuzz");
            } else if (i%3 == 0) {
                System.out.println("Fizz");
            } else if (i%5 == 0) {
                System.out.println("Buzz");
            } else {
                System.out.println(i);
            }
        }

    }
}
```
## C Implementation

### [Fizzbuzz.c](./C/fizzbuzz.c)
```c
/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com> 
 * @github: https://github.com/razdeep
 * @date: 20/12/2018
**/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number upto which you want to find Fizzbuzz numbers ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0 && i % 3 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
```