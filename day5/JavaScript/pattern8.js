/**
 * @author MadhavBahlMD
 * @date 26/12/2018 
 */

 function pattern8 (n) {
    let currentLine;

    // Print upper pattern
    for (let i=1; i<=n; i++) {
        currentLine = '';
        for (let j=1; j<=2*n; j++) {
            if (j<=n) {
                if (i<j)  currentLine += '  ';
                else  currentLine += '* ';
            } else {
                if (i+j < 2*n + 1)  currentLine += '  ';
                else  currentLine += '* ';
            }
        }
        console.log(currentLine);
    }

    // Print lower pattern
    for (let i=1; i<=n; i++) {
        currentLine = '';
        for (let j=1; j<=2*n; j++) {
            if (j<=n) {
                if (i+j>n+1)  currentLine += '  ';
                else  currentLine += '* ';
            } else {
                if (i > j-n)  currentLine += '  ';
                else  currentLine += '* ';
            }
        }
        console.log(currentLine);
    }
}

pattern8 (5);