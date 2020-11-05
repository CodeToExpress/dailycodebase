/**
 * @author MadhavBahl
 * @date 14/01/2019
 * Count Uniques using brute force search
 */

function countUniques (arr) {
    if (arr.length === 0)   return 0;

    let count = 1; // first element is always unique, since there is nothing behind it
    for (let j=1; j<arr.length; j++) {
        let flag = true;
        for (let i=0; i<j; i++) {
            if (arr[i] === arr[j]) {
                flag = false;
                break;
            }
        }
        if (flag)
            count++;
    }

    return count;
}

console.log (`Number of unique elements = ${countUniques([1, 1, 2, 2, 2, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 7])}`);
console.log (`Number of unique elements = ${countUniques([])}`);
