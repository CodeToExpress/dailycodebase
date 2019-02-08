/** 
 * Reverse an array using recursion
 * Method 1
 * Implemented by MadhavBahlMD
 * @date 18/01/2019
 */

function reverseArray (arr) {
    if (arr.length === 1) return arr;
    return reverseArray(arr.slice(1, arr.length)).concat([arr[0]]);
}

console.log (reverseArray([1, 2, 3, 4]));