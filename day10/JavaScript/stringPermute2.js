/**
 * METHOD -- Backtracking
 * Algorithm taken from GeeksForGeeks (https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/)
 * Implemented in JS by @MadhavBahlMD
 * @date 02/01/2019
 */

function swap (str, pos1, pos2) {
    // console.log (`pos1 = ${pos1}, pos2 = ${pos2} old`, str);
    str = str.split('');
    let temp = str[pos1];
    str[pos1] = str[pos2];
    str[pos2] = temp;
    str = str.join('');
    // console.log ('new str', str);
    return str;
}

function stringPermutations (str, start, end) {
    if (start === end) {
        console.log (str);
    } else {
        for (let i=start; i<end; i++) {
            str = swap (str, start, i);
            stringPermutations (str, start+1, end);
            str = swap (str, i, start);
        }
    }
}

let inputStr = '123';
stringPermutations (inputStr, 0, inputStr.length);