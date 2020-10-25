/**
 * @author MadhavBahl
 * @date 26/12/2018 
 */

function pattern7 (num) {
    let currentLine;

    // Print the upper half
    for(i=1; i<=num; i++) {
        currentLine = '';
        for (j=1; j<=2*num; j++) {

            if (j<=num) {
                if ((i+j) > num+1)
                    currentLine += '  ';
                else 
                    currentLine += '* ';
            } else {
                if (i>j-num) 
                    currentLine += '  ';
                else 
                    currentLine += '* ';
            }
            
        }
        console.log(currentLine);
    }

    // Print the lower half
    for (i=2; i<=num; i++) {
        currentLine = '';
        for(j=1; j<=2*num; j++) {

            if (j<=num) {
                if (j>i) 
                    currentLine += '  ';
                else    
                    currentLine += '* ';
            } else {
                if (i+(j-num) < num+1)
                    currentLine += '  ';
                else
                    currentLine += '* ';
            }

        }
        console.log(currentLine);
    }

}

pattern7 (5);