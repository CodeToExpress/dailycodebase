/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// Method 1 (Check the equidistant characters)
// Step 1: Set a flag variable ( = 1 )
// Step 2: Run a loop from 0 to stringLength/2 
// Step 3: In each iteration check whether character at ith position is equal to the character at length-i-1 position.
// Step 4: If the condition is satisfied even once, set the flag to 0
// Step 5: After the iterations are over, if the flag = 1, print "Palindrome" else print "Not Palindrome"

function isPalindrome (str) {
    let i, len = str.length, flag = 1;

    // Check the equidistant characters
    for (i=0; i>=len/2; i++) {
        if (str[i] !== str[len-1-i]) {
            flag = 0;
            break;
        }
    }

    // Print the result based on flag
    if (flag === 1) {
        console.log("The given string \"" + str + "\" is a palindrome");
    } else {
        console.log("The given string \"" + str + "\" is not a palindrome");
    }
}

isPalindrome("hello");
isPalindrome("level");