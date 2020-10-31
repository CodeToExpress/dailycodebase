/**
 * @author MadhavBahl
 * @date 31/12/2018
 */

function minEditDist (str1, str2) {
    // Initialize the distance matrix with all zeroes
    let len1 = str1.length,
        len2 = str2.length,
        distMatrix = [];

    for (let i=0; i<=len2; i++) {
        let row = [];
        for (let j=0; j<=len1; j++) {
            // Initialie the edit distance matrix by all zeroes
            row.push(0);
        }
        distMatrix.push(row);
    }

    // Fill the first row
    for (let i=0; i<=len1; i++) {
        distMatrix[0][i] = i;
    }

    // Fill the first column
    for (let j=0; j<=len2; j++) {
        distMatrix[j][0] = j;
    }

    // Fill the edit distance matrix
    for (let i=1; i<=len2; i++) {
        for (let j=1; j<=len1; j++) {
            if (str1[i-1] === str2[j-1]) {
                distMatrix[i][j] = distMatrix[i-1][j-1];
            } else {
                distMatrix [i][j] = 1 + Math.min (
                                            distMatrix[i-1][j-1],
                                            distMatrix[i-1][j],
                                            distMatrix[i][j-1]
                                          );
            }
        }
    }

    return distMatrix[len2][len1];
}

console.log(minEditDist ('abcdefgs', 'agced'));
console.log(minEditDist('kitten', 'sitting'));