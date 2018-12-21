/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// Step 1: Split the given string into array
// Step 2: Reverse the array using reverse() function
// Step 3: Join the reversed array to form a string

// This solution works with JS only (or any other language which supports in built methods)
function strRev (str) {
    // Convert str to array
    // Reverse the array
    // Join the array to form a string

    // let arr = str.split('');
    // arr.reverse();
    // return arr.join('');

    // One Liner answer
    return str.split('').reverse().join('');
}

console.log(strRev('Hello!'));