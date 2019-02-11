/**
 * @author MadhavBahlMD
 * @date 25/01/2019
 * Method - First Assign then place values
 * Complexity - O(num_bombs)   // num_bombs = number of bombs
 */

function makeMineField (posArr, row, col) {
    let mineField = [];

    // initialize the mineField with zeros
    for (let i=0; i<row; i++) {
        let thisRow = [];
        for (let j=0; j<col; j++) 
            thisRow.push (0);
        mineField.push (thisRow);
    }

    // Iterate over position array and assign values
    for (let pos of posArr) {
        mineField [pos[0]][pos[1]] = -1;

        for (let i=-1; i<=1; i++) 
            for (let j=-1; j<=1; j++) 
                if ((pos[0]+i >= 0 && pos[0]+i < row) && (pos[1]+j >= 0 && pos[1]+j < col))
                    if (mineField [pos[0]+i][pos[1]+j] !== -1)  mineField [pos[0]+i][pos[1]+j]++;
    }

    console.log (mineField);
}

makeMineField ([[0, 0], [0, 1]], 4, 4);