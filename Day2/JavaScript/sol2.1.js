/**
 * @author MadhavBahl
 * @date 21/12/2018
 */

function strRev (str) {
    var i, j,
      len = str.length,
      tempArr = [];
    
    // Read string in reverse order and store each letter in the array
    for (i=0, j=len-1; i<len; i++, j--) {
        tempArr[i] = str[j]; // You can use push() instead of assigning by index
    }

    // Join the tempArr to convert it into a string
    tempArr = tempArr.join('');

    // Return tempArr
    return tempArr;
}

console.log(strRev('Hello!'));