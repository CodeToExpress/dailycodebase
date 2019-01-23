/**
 * @author MadhavBahlMD
 * @date 18/01/2019
 * Method - Frequency Count (object)
 */

function searchCommonElements (arr1, arr2, arr3) {
    let commonElements = [];

    // Create frequency count
    let freq1 = {},
        freq2 = {},
        freq3 = {};

    assignFrequency (freq1, arr1);
    assignFrequency (freq2, arr2);
    assignFrequency (freq3, arr3);
    
    for (let key in freq1)
        if (key in freq2 && key in freq3)
            commonElements.push (parseInt(key));
    
    return commonElements;
}

function assignFrequency (freq, arr) {
    for (let element of arr)
        freq[element] = (freq[element] || 0) + 1;
}

console.log (searchCommonElements ([1, 4, 6, 2, 3, 7, 8, 9], [2, 5, 4, 6, 8, 1], [1, 2, 3, 4])); // [1, 2, 4]
console.log (searchCommonElements ([1, 2, 4, 6, 7, 9, 11, 14, 15], [2, 3, 4, 5, 6, 7, 8, 9], [2, 4, 6, 8])); // [2, 4, 6]