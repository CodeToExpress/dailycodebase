/**
 * @author MadhavBahl
 * @date 21/12/2018
 */

// Step 1: Strings are immutable (in JavaScript), hence convert it into array.
// Step 2: Run a loop from 0 to (size of array)/2 and interchange the element at i index with element at position size-1-i 
// Step 3: Join the array to form a string

function strRev (str) {
    var i, j, temp, len = str.length;

    // Strings are immutable in javascript, hence we convert the string into an array
    str = str.split('');

    // Reverse the array elements by interchanging the elements which are equidistant from start and end
    for (i=0, j=len-1; i<=len/2; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Join the reversed array into a string
    str = str.join('');

    // Return the reversed string
    return str;
}

console.log(strRev('Hello!'));