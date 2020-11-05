/**
 * @author MadhavBahl
 * @date 26/12/2018 
 */

 function pattern2 (num) {
    // Set count = 0
    let  count = 0;

    // Print the pattern
    for (let i=1; i<=num; i++) {
        let currentLine = '';
        for (let j=1; j<=i; j++) {
            count++;
            currentLine += count + ' ';
        }
        console.log(currentLine);
    }  
}

pattern2 (4);