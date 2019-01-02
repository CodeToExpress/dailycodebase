/**
 * @author MadhavBahlMD
 * @date 01/01/2019
 * METHOD (Using Array)
 * - Initalize an empty array `strArr` that will store all the substrings that contains all the array elements
 * - iterate over each character of string and check whether it is present in the array
 * - If it is not present in the array, then continue, else duplicate the array into another temporary array `tempArr` and remove the current letter from the temp arr
 * - Take another variable j, and iterate over the rest of the string till the last remaining element in the tempArr, and keep appending each character in some temporary strinig.
 * - Stop the iteration if either it is the end of the string, or tempArr is empty
 * - if the current (temporary) string contains all elements of the array, store push it to `strArr`
 * - After the iterations are complete 
 */

function smallestSubstr (str, arr) {
    let strArr = [],
        strLen = str.length;

    // iterate over the string to find any match
    for (let i=0; i<strLen; i++) {
        // Check whether the current letter exists in array
        let pos = arr.indexOf(str[i]);
        // if there is only one character in the array return that as the smallest substring
        if (arr.length === 1 && str[i] === arr[0])  return str[i];

        // Check for the remaining characters
        if (pos >= 0) {
            // Duplicate the arr (To Prevent Shallow Copy)
            let tempArr = JSON.parse(JSON.stringify(arr));

            // Append to a temporary string and remove that element from tempArr
            let currentStr = tempArr[pos];
            tempArr.splice (pos, 1);

            // Iterate over the remaining string elements
            let j=i+1, flag = 0;
            while (j<strLen) {
                let nextPos = tempArr.indexOf(str[j]);
                currentStr += str[j];
                if (nextPos >= 0) {
                    tempArr.splice (nextPos, 1);
                }
                if (tempArr.length<=0) {
                    flag = 1;
                    break;
                }
                j++;
            }

            if (flag === 1)  strArr.push (currentStr);
        }
    }

    // Return empty string if strArr is empty
    if (strArr.length === 0)   return "";

    // find the minimum index in cntArr
    let minCntIndex = 0;
    for (let i=1; i<strArr.length; i++) {
        if (strArr[minCntIndex].length > strArr[i].length) {
            minCntIndex = i;
        }
    }

    return (strArr[minCntIndex]);
}

console.log (smallestSubstr ('abyuxabyteqaebczt', ['a','b','c']));
console.log (smallestSubstr ("abd", ['x','y','z']));
console.log (smallestSubstr ("x", ['x']));
console.log (smallestSubstr ("afekbtcodebancfeger", ["a","b","c"]));