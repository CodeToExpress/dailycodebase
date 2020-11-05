/**
 * @author MadhavBahl
 * @date 21/12/2018
 */

// Step 1: Declare a temporary array, say tempArr[]
// Step 2: Run a loop from size-1 to 0 and add corresponding character of string to the tempArr[] from beginning
// Method 2.1 (Add using index)
// for (i=0, j=len-1; i<len; i++, j--) {
//     tempArr[i] = str[j];
// }
// Method 2.2 (Add using `push()` )
// for (j=len-1; j>=0; j--) {
//     tempArr.push(str[j]);
// }
// Step 3: Join the elements of the tempArr[] to form a string

function strRev (str) {
    var i, j,
      len = str.length,
      tempArr = [];
    
    // Read string in reverse order and store each letter in the array
    for (j=len-1; j>=0; j--) {
        tempArr.push(str[j]); 
    }

    // Join the tempArr to convert it into a string
    tempArr = tempArr.join('');

    // Return tempArr
    return tempArr;
}

console.log(strRev('Hello!'));