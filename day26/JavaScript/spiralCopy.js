/* ==================================== */
/* ===== Matrix Spiral Copy In JS ===== */
/* ==================================== */

function spiralCopy(inputMatrix) {
    // your code goes here
    let outputArray = [],
        numRow = inputMatrix.length,
        numCol = inputMatrix[0].length;
    
    let topRow   = 0,
        btmRow   = numRow - 1,
        leftCol  = 0,
        rightCol = numCol - 1;
  
    while ((topRow <= btmRow) && (leftCol <= rightCol)) {
        for (let i=leftCol; i<=rightCol; i++) {
            outputArray.push(inputMatrix[topRow][i]);
        }
        topRow++;
        
        for (let i=topRow; i<=btmRow; i++) {
            outputArray.push(inputMatrix[i][rightCol]);
        }
        rightCol--;
        
        if (topRow <= btmRow) {
            for (let i=rightCol; i>=leftCol; i--) {
                outputArray.push(inputMatrix[btmRow][i]);
            }
            btmRow--;
        }
        
        if (leftCol <= rightCol) {
            for (let i=btmRow; i>=topRow; i--) {
                outputArray.push(inputMatrix[i][leftCol]);
            }
            leftCol++;
        }
    }
    
    return outputArray;
}

console.log(spiralCopy([ [1,    2,   3,  4],
             [6,    7,   8,  9],
             [11,  12,  13,  14],
             [16,  17,  18,  19] ]));  
             // Should print [ 1, 2, 3, 4, 9, 14, 19, 18, 17, 16, 11, 6, 7, 8, 13, 12 ]

console.log(spiralCopy([ [1,    2,   3,  4,    5],
                         [6,    7,   8,  9,   10],
                         [11,  12,  13,  14,  15],
                         [16,  17,  18,  19,  20] ]));
// Should print [ 1, 2, 3, 4, 5, 10, 15, 20, 19, 18, 17, 16, 11, 6, 7, 8, 9, 14, 13, 12 ]