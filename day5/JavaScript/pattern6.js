/**
 * @author MadhavBahl
 * @date 26/12/2018 
 */

function pattern6 (n) {
    let currentLine = '';

    // Print upper triangle
    for(let i=1; i<=n; i++) {
        currentLine = '';

        // Print white spaces
        for (let j=1; j<=n-i; j++) {
            currentLine += '  ';
        }

        // Print asterisks
        for (let j=1; j<=(2*i-1); j++) {
            currentLine += '* ';
        }

        console.log(currentLine);
    }

    // Print lower triangle
    for (let i=(n-1); i>=1; i--) {
        currentLine = '';

        // Print white spaces
        for (let j=1; j<=n-i; j++) {
            currentLine += '  ';
        }

        // Print asterisks
        for (let j=1; j<=(2*i-1); j++) {
            currentLine += '* ';
        }

        console.log(currentLine);
    }
}

pattern6 (5);