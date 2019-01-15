![cover](./cover.png)

# Day 19 - Array Series Part 2

**Cartesian Product and Fisher-Yates Shuffle Algorithm**

## Ques A - Cartesian Product of Two Sets

**Question** -- Given 2 sets A and B, write a program to print the cartesian product of A and B.

#### Cartesian Product

In set theory a Cartesian product is a mathematical operation that returns a set (or product set or simply product) from multiple sets. That is, for sets A and B, the Cartesian product A × B is the set of all ordered pairs (a, b) where a ∈ A and b ∈ B

Source: [Wikipedia](https://en.wikipedia.org/wiki/Cartesian_product)

**Example**

```
input:
  A = [1, 2]
  B = [3, 4]
output:
[ 
    [1, 3],
    [1, 4],
    [2, 3],
    [2, 4]
]
```

## Ques B - Fisher-Yates Shuffle Algorithm

**Question** - Given an array, write a function that returns an array with shuffled elements form the original array

**Example**

```
input: [1, 2, 3, 4, 5, 6]
output: [3, 1, 4, 2, 5, 6]
```

### Fisher-Yates Shuffle Algorithm

The Fisher–Yates shuffle is an algorithm for generating a random permutation of a finite sequence—in plain terms, the algorithm shuffles the sequence. The algorithm effectively puts all the elements into a hat; it continually determines the next element by randomly drawing an element from the hat until no elements remain. The algorithm produces an unbiased permutation: every permutation is equally likely.

The Fisher–Yates shuffle is named after Ronald Fisher and Frank Yates, who first described it, and is also known as the Knuth shuffle after Donald Knuth.

#### Algorithm

1. Write down the numbers from 1 through N.
2. Pick a random number k between one and the number of unstruck numbers remaining (inclusive).
3. Counting from the low end, strike out the kth number not yet struck out, and write it down at the end of a separate list.
4. Repeat from step 2 until all the numbers have been struck out.
5. The sequence of numbers written down in step 3 is now a random permutation of the original numbers.

source: [wikipedia (https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle)](https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle)

![ques](./ques.png)

# Solution

## Ques A

**Question** -- Given 2 sets A and B, write a program to print the cartesian product of A and B.

### JavaScript Implementation

#### [Solution by @MadhavBahlMD](./JavaScript/cartesian_madhav.js)

```js
/**
 * @author MadhavBahlMD
 * @date 15/01/2018
 * Method: Use nested loop to generate the 2D matrix
 */

function cartesian (arr1, arr2) {
    if (arr1.length === 0 || arr2.length === 0) return null;

    let cartesianProduct = [];

    for (let arr1Element of arr1) {
        for (let arr2Element of arr2) {
            cartesianProduct.push([arr1Element, arr2Element]);
        }
    }

    return cartesianProduct;
}

console.log (cartesian ([1, 2], [3, 4]));
console.log (cartesian ([1, 2], []));
console.log (cartesian ([1, 2, 3, 4], ['a', 'b', 'c']));
```
## Java Implementation

### [Solution](./Java/cartesianProd.java)

```java
/**
 * @date 15/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class cartesianProd {
    public static void prod(int n,int arr2[])
    {
        for(int i=0;i<arr2.length;i++)
            System.out.println("{"+n+","+arr2[i]+"}");
    }
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of the 2 sets");
        int m=sc.nextInt();
        int n=sc.nextInt();
        int arr1[]=new int[m];
        int arr2[]=new int[n];
        System.out.println("Enter elements for first set");
        for(int i=0;i<m;i++)
            arr1[i]=sc.nextInt();
        System.out.println("Enter elements for second set");
        for(int i=0;i<n;i++)
            arr2[i]=sc.nextInt();
        for(int i=0;i<m;i++)
            prod(arr1[i],arr2);
    }
}
```

***

## Ques B

**Question** -- Given an array, write a function that returns an array with shuffled elements form the original array

### JavaScript Implementation

#### [Solution (using recursion)](./JavaScript/fisherYates_madhav.js)

```js
/**
 * Fisher Yates Shuffle Algorithm
 * Implemented in JavaScript by @MadhavBahlMD
 * Algorithm
 *   Step 1: Write down the numbers from 1 through N.
 *   Step 2: Pick a random number k between one and the number of unstruck numbers remaining (inclusive).
 *   Step 3: Counting from the low end, strike out the kth number not yet struck out, and write it down at the end of a separate list.
 *   Step 4: Repeat from step 2 until all the numbers have been struck out.
 *   Step 5: The sequence of numbers written down in step 3 is now a random permutation of the original numbers.
 * Method used - Helper Method Recursion
 */

function fisherYates (arr) {
    let shuffledArr = [];
    console.log (`Original Array: ${arr}`);
    
    function shuffle (toBeShuffled) {
        // Base Case
        if (toBeShuffled.length === 0)  return;
        
        // Push inro shuffled array
        let index = Math.floor(Math.random()*toBeShuffled.length);
        shuffledArr.push (toBeShuffled[index]);

        // Shuffle the remaining array
        toBeShuffled.splice (index, 1);
        shuffle (toBeShuffled);
    }
    
    shuffle (arr);
    console.log (`Shuffled Array: ${shuffledArr}`);
}

fisherYates ([1, 2, 3, 4, 5, 6]);
```

## Java Implementation

### [Solution](./Java/FisheYates.java)

```java
/**
 * @date 15/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class FisheYates {
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int n,i,rd,t;
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++)
            arr[i]=sc.nextInt();
        for(i=n-1;i>=0;i--)
        {
                Random r = new Random();
                rd=r.nextInt(n);
                t=arr[rd];
                arr[rd]=arr[i];
                arr[i]=t;
        }
        System.out.print("Shuffled array is :");
        for(i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}
```