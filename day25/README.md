![cover](./cover.png)

# Day 25 - Array Series Part 8: Rotate Square Tile

**Question** -- Given a 2 dimensional (NxN) square array, write a function that rotates the given array by 90 degrees clockwise

**Example**

```
input:
[
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

output: 
[
    [7, 4, 1],
    [8, 5, 2],
    [9, 6, 3]
]
```

![ques](./ques.png)

## Solution

## JavaScript Implementation

### [Solution 1 -- Creating a new matrix for rotated tile](./JavaScript/rotateTile.js)

#### Main Logic:

```js
for (let i=0; i<n; i++) {
    for (let j=0; j<n; j++)
        rotatedTile [i][j] = arr[(n-j)-1][i];
}
```

#### Complete Code:

```js
/**
 * @author MadhavBahlMD
 * @date 23/01/2019
 * Method -- Creating a new matrix to represent the rotated tile
 */

function rotateTile (arr) {
    let n = arr.length;

    // print the original tile
    console.log ('Original Tile: ');
    let toPrint = '';
    for (let array of arr) {
        toPrint = '';
        for (let element of array) {
            toPrint += element + ' ';
        }
        console.log (toPrint);
    }

    // Make another tile to store the rotated tile
    let rotatedTile = [];
    // Initialize with zeros
    for (let i=0; i<n; i++) {
        let row = [];
        for (let j=0; j<n; j++) {
            row.push(0);
        }
        rotatedTile.push (row);
    }

    for (let i=0; i<n; i++) {
        for (let j=0; j<n; j++)
            rotatedTile [i][j] = arr[(n-j)-1][i];
    }

    // print the rotated tile
    console.log ('Rotated Tile: ');
    for (let array of rotatedTile) {
        toPrint = '';
        for (let element of array) {
            toPrint += element + ' ';
        }
        console.log (toPrint);
    }

    return rotatedTile;
}

rotateTile ([[1, 2, 3], [4, 5, 6], [7, 8, 9]]);
```

### [Solution 2 -- Changing the original tile](./JavaScript/rotateTile2.js)

```js
To be added
```

## Java Implementation

### [Solution](./Java/rotateTile.java)

```java
/**
 * @date 3/02/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class rotateTile {
    public static int[][] rotate(int arr[][])
    {
        int i,j,ri=0;
        int rj=arr.length-1;
        int rot[][]=new int[arr.length][arr.length];
        for(i=0;i<arr.length;i++)
        {
            for(j=0;j<arr.length;j++)
            {
                rot[ri][rj]=arr[i][j];
                ri++;
            }
            rj--; ri=0;
        }
        return rot;
    }
    public static void main(String []args)
    {
        int n,i,j;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int ri=0,rj=n-1;
        int arr[][]=new int[n][n];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                arr[i][j]=sc.nextInt();
        System.out.println("Original matrix is ");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
        int rot[][]=rotate(arr);
        System.out.println("Rotated matrix is ");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                System.out.print(rot[i][j]+" ");
            }
            System.out.println();
        }
    }
}
```