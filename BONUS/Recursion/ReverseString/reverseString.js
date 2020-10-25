/**
 * Reverse a string using recursion
 * Implemented by - MadhavBahl
 * @date 18/01/2019
 */

function reverseString (str) {
    if (str.length === 1)  return str;
    return reverseString(str.substring(1, str.length)) + str[0];
}

console.log (reverseString ('abcd'));