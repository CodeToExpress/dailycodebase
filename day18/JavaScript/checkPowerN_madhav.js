/**
 * @author MadhavBahl
 * @date 14/01/2019
 * Using frequency counter
 */

function checkPowerN (arr1, arr2, num) {
    if (arr1.length !== arr2.length)    return false;

    let freq1 = {};
        freq2 = {};
    
    // Make frequency counter for array 1
    let powElement;
    for (let element of arr1) {
        powElement = Math.pow (element, num);
        freq1[powElement] = (freq1[powElement] || 0) + 1;
    }

    // Make frequency counter for array 2
    for (let element of arr2) 
        freq2[element] = (freq2[element] || 0) + 1;
        
    // Compare the objects
    for (let key in freq1) {
        if (!(key in freq2))
            return false;
        if (freq1[key] !== freq2[key])
            return false;
    }
    return true;
}

console.log (checkPowerN ([1, 2, 3, 4], [4, 9, 1, 16], 2));
console.log (checkPowerN ([3, 4, 5, 2], [1, 2, 3], 4));