/**
 * @author MadhavBahlMD
 * @date 16/01/2019
 * Method -- Multiple Pointers, solution in O(n)
 */

function pairSumN (arr, num) {
    let i=0, j=arr.length-1, pairArr = [];

    while (i<j) {
        if (arr[i] + arr[j] === num) {
            pairArr.push (arr[i], arr[j]);
            return pairArr;
        }
        else if (arr[i] + arr[j] < num)
            i++;
        else
            j--;
    }

    return pairArr;
}

console.log (pairSumN ([-3, -2, -1, 0, 1, 2, 3], 0));
console.log (pairSumN ([-1, 4, 5, 5, 6, 7, 8], 10));
console.log (pairSumN ([1, 2, 3, 4, 5, 6], 20));