/**
 * @author MadhavBahlMD
 * @date 01/14/2018
 * Frequency Ccounter using object
 */

function freqCounter (arr) {
    let freq = {};

    // Iterate over the array and update frequency object
    for (let element of arr) {
        freq[element] = (freq[element] || 0) + 1;
    }
    
    // Print the output
    printFrequency (freq);
}

function printFrequency (freqObj) {
    for (let key in freqObj)
        console.log (`'${key}' is present ${freqObj[key]} time(s)`);
}

freqCounter ([ 1, 2, 3, 1, 3, 4, 4, 4, 4, 2, 5]);