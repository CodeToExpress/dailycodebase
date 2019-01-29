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