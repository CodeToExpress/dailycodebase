/**
 * @author MadhavBahlMD
 * @date 18/01/2019
 * Method - Frequency Count
 */

function searchCommonElements (arr1, arr2) {
    let commonElements = [];

    // Create frequency count
    let freq1 = {},
        freq2 = {};

    for (let element of arr1)
        freq1[element] = (freq1[element] || 0) + 1;
    
    for (let element of arr2)
        freq2[element] = (freq2[element] || 0) + 1;
    
    // Check common elements
    for (let key in freq1)
        if (freq2.hasOwnProperty(key))
            commonElements.push (key); // For Integer array, use parseInt(key) instead of directly pushing the key
    
    return commonElements;
}

console.log (searchCommonElements ([1, 2, 3, 4, 5, 6, 7], [4, 2, 9, 1]));
console.log (searchCommonElements ([0, 12, 41, 20], [9, 3, 1, 5]));