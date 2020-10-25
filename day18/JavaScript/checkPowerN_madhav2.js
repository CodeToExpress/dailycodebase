/**
 * @author MadhavBahl
 * @date 14/01/2019
 * Using Brute Force Search
 */

function checkPowerN (arr1, arr2, num) {
    if (arr1.length !== arr2.length)    return false;

    for (let i=0; i<arr1.length; i++)
        arr1[i] = Math.pow (arr1[i], num);

    for (let element of arr1) {
        let pos = arr2.indexOf (element);

        if (pos < 0)
            return false;
        
        arr2.splice (pos, 1);
    }
    return true;
}

console.log (checkPowerN ([1, 2, 3, 4], [4, 9, 1, 16], 2));
console.log (checkPowerN ([3, 4, 5, 2], [1, 2, 3], 4));