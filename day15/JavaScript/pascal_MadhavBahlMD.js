/**
 * @author MadhavBahl
 * @date 09/01/2018
 */

function findPascal (row, col) {
    if (col === 1 || col === row) {
        return 1;
    } else {
        return findPascal (row-1, col-1) + findPascal (row-1, col);
    }
}

function printPascal (num) {
    let currentRow;
    for (let i=1; i<=num; i++) {
        currentRow = '';
        for (let j=1; j<=i; j++) {
            currentRow += findPascal (i, j) + ' ';
        }
        console.log(currentRow);
    }    
}

console.log ('/* ===== Pascal\'s Triangle for n = 5\n');
printPascal (5);
console.log ('\n/* ===== Pascal\'s Triangle for n = 7\n');
printPascal (7);