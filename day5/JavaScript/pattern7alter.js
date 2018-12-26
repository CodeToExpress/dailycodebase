/**
 * @author MadhavBahlMD
 * @date 26/12/2018 
 */

 function pattern7 (n) {
    let currentLine;

    for (let i=1; i<=n; i++) {
        currentLine = '';
        for (let j=1; j<=2*n; j++) {

            // Print upperleft pattern
            if (i+j <= n+1)
                currentLine += '*';
            else
                currentLine += ' ';

            // Print upperright pattern
            if (i>j-n)
                currentLine += ' ';
            else
                currentLine += '*';
        }
        console.log(currentLine);
    }

    // Print lower half
    for (let i=1; i<=n; i++) {
        currentLine = '';
        for (let j=1; j<=2*n; j++) {

            // Print lower left pattern
            if (j>i)
                currentLine += ' ';
            else
                currentLine += '*';

            // Print lower right pattern
            if (i+j < 2*n+1)
                currentLine += ' ';
            else
                currentLine += '*';
        }
        console.log(currentLine);
    }
}

pattern7 (5);