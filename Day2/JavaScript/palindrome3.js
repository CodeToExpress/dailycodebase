/**
 * @author MadhavBahl
 * @date 21/12/2018
 */

// One Liner
function isPalindrome (str) {
    (str === (str.split('').reverse().join(''))) ? console.log("Palindrome") : console.log("Not Palindrome");
}

isPalindrome('hello');
isPalindrome('level');