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