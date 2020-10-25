# Reverse Array

WAP to reverse an array using recursion

**Example**

```
input: [1, 2, 3, 4]
output: [4, 3, 2, 1]
```

## Solution

### [JavaScript Implementation (method 1)](./reverseArray.js)

```js
/** 
 * Reverse an array using recursion
 * Method 1
 * Implemented by MadhavBahl
 * @date 18/01/2019
 */

function reverseArray (arr) {
    if (arr.length === 1) return arr;
    return reverseArray(arr.slice(1, arr.length)).concat([arr[0]]);
}

console.log (reverseArray([1, 2, 3, 4]));
```

### [JavaScript Implementation (method 2)](./reverseArray.js)

```js
/** 
 * Reverse an array using recursion
 * Method 1
 * Implemented by MadhavBahl
 * @date 18/01/2019
 */

function reverseArray (arr, startIndex, endIndex) {
    if (startIndex >= endIndex) return arr;

    let temp = arr[startIndex];
    arr[startIndex] = arr[endIndex];
    arr[endIndex] = temp;

    reverseArray (arr, startIndex+1, endIndex-1);
}

let arr = [1, 2, 3, 4];
console.log (`Original Array: ${arr}`);
reverseArray (arr, 0, arr.length-1);
console.log (`Reversed Array: ${arr}`);
```

### [Java Implementation](./ReverseArray.java)

```java
import java.util.Scanner;

/**
 * Reverse an array using recursion
 * @author MadhavBahl
 * @date 18/01/2019
 */

public class ReverseArray {
    public static void reverse (int[] arr, int startIndex, int endIndex) {
        if (startIndex >= endIndex) return;

        // Swap equidistant elements from start and end
        int temp = arr[startIndex];
        arr[startIndex] = arr[endIndex];
        arr[endIndex] = temp;

        reverse (arr, startIndex+1, endIndex-1);
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

        // Print the original array
        System.out.print("Original Array: ");
        for (int i=0; i<arr.length; i++)
            System.out.print(arr[i] +  " ");

        // Reverse the array
        reverse(arr, 0, arr.length-1);

        // Print the reversed array
        System.out.print("\nReversed Array: ");
        for (int i=0; i<arr.length; i++)
            System.out.print(arr[i] +  " ");
    }
}
```