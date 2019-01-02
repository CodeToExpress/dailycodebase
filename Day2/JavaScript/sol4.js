/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// Step 1: Declare an empty string, say reverse = ''
// Step 2: Run a loop from 0 to length of string
// Step 3: For each letter of original string, concatenate reverse with it. (concatenate each element of string with reverse string, such that element gets concatenated before the current reverse string)

// Using basic string concatenation
function strRev (str) {
    // Initialize an empty string "Reverse"
    let reverse = '';

    for (i=0; i<str.length; i++) {
        // for each letter of original string, concatenate reverse with it
        reverse = str[i] + reverse;
    }

    return reverse;
}

console.log(strRev('Hello!'));