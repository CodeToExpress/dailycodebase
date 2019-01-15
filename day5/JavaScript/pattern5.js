/**
 * @author MadhavBahlMD
 * @date 26/12/2018 
 */

function pattern5 (num) {
    let currentLine = '';

    // Print the pattern
    for (let i=1; i<=num; i++) {
        currentLine = '';

        // Print the white spaces
        for (let j=1; j<i; j++) {
            currentLine += '  ';
        }

        // Print asterisk
        for (let j=1; j<=(2*num - (2*i - 1)); j++) {
            currentLine += '* ';
        }

        console.log(currentLine);
    }
}

pattern5 (5);