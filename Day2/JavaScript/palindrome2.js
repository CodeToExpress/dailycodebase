/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// Step 1: Find the reverse of the given string
// Step 2: If reverse is equal to original string, print "Palindrome", else print "Not Palindrome".

function isPalindrome (str) {
    let reversed = str.split('').reverse().join('');
    if (str === reversed) {
        console.log("The given string \"" + str + "\" is a palindrome");
    } else {
        console.log("The given string \"" + str + "\" is not a palindrome");
    }
}

isPalindrome('hello');
isPalindrome('level');