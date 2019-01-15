/**
 * @author MadhavBahlMD
 * @date 14/01/2019
 * Count Uniques using frequency object
 */

function countUniques (arr) {
    let freq = {},
        count = 0;
    
    for (let element of arr) {
        if (!(element in freq)) {
            count++;
            freq[element] = 1;
        } else
            freq[element]++;
    }

    return count;
}

console.log (`Number of unique elements = ${countUniques([1, 1, 2, 2, 2, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 7])}`);
console.log (`Number of unique elements = ${countUniques([])}`);