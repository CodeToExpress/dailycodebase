/**
 * @author MadhavBahl
 * @date 14/01/2019
 * Count uniques using multiple pointers (since the input array is sorted)
 */


function countUniques (arr) {
    if (arr.length === 0)   return 0;

    let i=0;

    for (let j=1; j<arr.length; j++) {
        if (arr[i] !== arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i+1;
}

console.log (`Number of unique elements = ${countUniques([1, 1, 2, 2, 2, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 7])}`);
console.log (`Number of unique elements = ${countUniques([])}`);