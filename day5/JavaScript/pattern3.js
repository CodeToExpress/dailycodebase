/**
 * @author MadhavBahl
 * @date 26/12/2018 
 */

function pattern3 (num) {
    let currentLine = '';

    // Print the upper triangle
    for (let i=1; i<=num; i++) {
        currentLine = '';
        for (let j=1; j<=i; j++) {
            currentLine += j + " ";
        }
        console.log(currentLine);
    }

    // Print the lower half
    for (let i=num-1; i>=1; i--) {
        currentLine = '';
        for (let j=1; j<=i; j++) {
            currentLine += j + " ";
        }
        console.log(currentLine);
    }
}

pattern3 (5);