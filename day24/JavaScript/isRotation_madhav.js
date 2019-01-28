/**
 * @author MadhavBahlMD
 * @date 22/01/2019
 * Method - Circular Search -- Time = O(n)
 */

function isRotation (arr1, arr2) {
    let len1 = arr1.length,
        len2 = arr2.length;

    // return false if lengths are different
    if (len1 !== len2)  return false;

    // find position of first element of array2 in array 2
    let isRotated = true,
        pos = arr1.indexOf (arr2[0]);

    // Return false if element not found
    if (pos < 0)  return false;
    
    // Check all the other numbers
    for (let i=0; i<len1; i++) {
        if (arr1[(pos+i)%len1] !== arr2[i]) {
            isRotated = false;
            break;
        }
    }

    return isRotated;
}

console.log (isRotation ([1, 2, 3, 4, 5, 6, 7], [4, 5, 6, 7, 1, 2, 3]));  // true
console.log (isRotation ([1, 2, 3, 4, 5, 6, 7], [7, 1, 2, 3]));  // false
console.log (isRotation ([1, 2, 3, 4, 5, 6], [6, 5, 4, 3, 2, 1]));  // false 