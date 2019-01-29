/**
 * Spiral Matrix Generation
 * @author MadhavBahlMD
 * @date 24/01/2019
 */

function spiralGeneration (num) {
    let spiral = [],
        topRow = 0,
        btmRow = num-1,
        leftCol = 0,
        rightCol = num-1,
        count = 1;
    
    // Initialize the spiral matrix with zeros
    for (let i=0; i<num; i++) {
        let thisRow = [];
        for (let j=0; j<num; j++) 
            thisRow.push (0);
        spiral.push (thisRow);
    }

    // Populate the matrix
    while ((topRow<=btmRow) && (leftCol<=rightCol)) {
        // Populate the top row
        for (let i=leftCol; i<=rightCol; i++) 
            spiral[topRow][i] = count++;
        topRow++;

        // Populate the right column
        for (let i=topRow; i<=btmRow; i++)
            spiral[i][rightCol] = count++;
        rightCol--;

        // Populate the bottom row IF toprow has not become greater than bottom row
        if (topRow <= btmRow) {
            for (let i=rightCol; i>=leftCol; i--)
                spiral[btmRow][i] = count++;
            btmRow--;
        }

        // Populate the left column IF rightCol has not become less than left Col
        if (rightCol >= leftCol) {
            for (let i=btmRow; i>=topRow; i--)
                spiral[i][leftCol] = count++;
            leftCol++;
        }
    }

    // Print the result
    console.log (spiral);
    return spiral;
}

spiralGeneration (2);
spiralGeneration (3);
spiralGeneration (4);
spiralGeneration (5);