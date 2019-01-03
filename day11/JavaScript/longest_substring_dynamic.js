/**
 * @author MadhavBahlMD
 * @date 03/01/2018
 * Referance: https://en.wikipedia.org/wiki/Longest_common_substring_problem
 */

function longestSubstring (str1, str2) {
    // initialize the longest substring matrix with all zeroes
    let strMat = [],
        len1 = str1.length,
        len2 = str2.length;

    for (let i=0; i<=len2; i++) {
        let row = [];
        for (let j=0; j<=len1; j++) {
            row.push(0);
        }

        strMat.push(row);
    }

    // Fill the longest substring matrix and find the maximum element simultaneously
    let maxi = 0, maxj = 0, max = strMat[0][0];
    for (let i=1; i<=len2; i++) {
        for (let j=1; j<=len1; j++) {
            if (str2[i-1] === str1[j-1]) {
                strMat[i][j] = strMat[i-1][j-1] + 1;
                if (strMat[i][j] > max) {
                    max = strMat[i][j];
                    maxi = i;
                    maxj = j;
                }
            }
        }
    }

    // Find the longest substring
    let maxSubStr = '';
    for (i=maxi, j=maxj; i>=0; i--, j--) {
        if (!(i<=0 || j<=0) && strMat[i][j] !== 0) {
            maxSubStr += str2[i-1];
        } else {
            break;
        }
    }
    
    // Return the reverse of maxSubStr
    return maxSubStr.split('').reverse().join('');
}

console.log(longestSubstring ("abcdefg", "xyabcz"));
console.log(longestSubstring ("XYXYXYZ", "XYZYX"));