/**
 * @author MadhavBahlMD
 * @date 18/01/2019
 * Array Elements Sum using Recursion
 */

function findArraySum (arr, num) {
    if (num <= 0)   return 0;
    return arr[num-1] + findArraySum(arr, num-1);
}

let arr = [1, 2, 3, 4, 5];
console.log (`Sum of Elements of array ${arr} is: ${findArraySum(arr, arr.length)}`);