/**
 * @author MadhavBahlMD
 * @date 26/12/2018 
 */

function pattern1 (num) {
    console.log ("/* ===== Pattern #1 ===== */");
    
    for (let i=1; i<=num; i++) {
        // we will store the output for each line in a string 
        // since console.log would print and take the pointer to next line
        let currentLine = '';
        for(let j=1; j<=i; j++) {
            currentLine += j + ' ';
        }
        console.log (currentLine);
    }
}

pattern1(5);