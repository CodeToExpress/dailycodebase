/**
 * @author MadhavBahlMD
 * @date 26/12/2018 
 */

function pattern4 (num) {
    let currentLine = '';

    for (let i=1; i<=num; i++) {
        currentLine = '';

        // Print left white spaces
        for (let j=num; j>i; j--) {
            currentLine += "  ";
        }

        // Print numbers
        for (let j=i; j<=(2*i-1); j++) {
            currentLine += j + " ";
        }
        for (let j=(2*i-1)-1; j>=i; j--) {
            currentLine += j + " ";
        }

        // Print the line
        console.log(currentLine);
    }
}

pattern4 (5);