# Array Sum

WAP to calculate the sum of elements in a given integer array using recursion

**Example** 

```
input: [1, 2, 3, 4, 5]
output: 15
```

## Solution

### [JavaScript Implementation](./arraySum.js)

```js
/**
 * @author MadhavBahlMD
 * @date 18/01/2019
 * Array Elements Sum using Recursion
 */

function findArraySum (arr, num) {
    if (num <= 0)   return 0;
    return arr[num-1] + findArraySum(arr, num-1);
}

let arr = [1, 2, 3, 4, 5];
console.log (`Sum of Elements of array ${arr} is: ${findArraySum(arr, arr.length)}`);
```

### [Java Solution](./ArraySum.java)

```java
import java.util.Scanner;

/**
 * Recursive Array Sum
 * @author MadhavBahlMD
 * @date 18/01/2019
 */

public class ArraySum {
    public static int findArraySum (int arr[], int num) {
        if (num <= 0)  return 0;
        return arr[num-1] + findArraySum(arr,num-1);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Sum of Array elements using recursion ===== */");

        // Input the array
        System.out.print("\nEnter the number of elements in the array: ");
        int n = input.nextInt();
        int arr[] = new int[n];
        for (int i=0; i<n; i++) {
            System.out.print("Enter arr[" + i + "]: ");
            arr[i] = input.nextInt();
        }

        // Print the product
        System.out.println("The sum of numbers is: " + findArraySum(arr, n));
    }
}
```