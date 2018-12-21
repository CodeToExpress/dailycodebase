/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

// Method 5 -- Using reduce helper

// Using reduce helper function (JS only)
function strRev(str) {
    // return str.split('').reduce((reversed, character) => {
    //     return character+reversed;
    // }, '');

    // One Liner
    return str.split('').reduce((rev, letter) => letter + rev, '');
}

console.log(strRev('Hello!'));