/** 
 * Reverse an array using recursion
 * Method 1
 * Implemented by MadhavBahl
 * @date 18/01/2019
 */

function reverseArray (arr, startIndex, endIndex) {
    if (startIndex >= endIndex) return arr;

    let temp = arr[startIndex];
    arr[startIndex] = arr[endIndex];
    arr[endIndex] = temp;

    reverseArray (arr, startIndex+1, endIndex-1);
}

let arr = [1, 2, 3, 4];
console.log (`Original Array: ${arr}`);
reverseArray (arr, 0, arr.length-1);
console.log (`Reversed Array: ${arr}`);