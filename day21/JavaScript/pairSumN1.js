/**
 * @author MadhavBahlMD
 * @date 17/01/2019
 * Method used -- bruteforce search (Iteration using nested loops)
 */

function pairSumN (arr, num) {
    let pairArray = [];

    for (let i=0; i<arr.length-1; i++)
        for (let j=i+1; j<arr.length; j++) {
            if (arr[i] + arr[j] === num) {
                pairArray.push (arr[i], arr[j]);
                return pairArray;
            }
        }
    
    return pairArray;
}

console.log (pairSumN ([-3, -2, -1, 0, 1, 2, 3], 0));
console.log (pairSumN ([-1, 4, 5, 5, 6, 7, 8], 10));
console.log (pairSumN ([1, 2, 3, 4, 5, 6], 20));