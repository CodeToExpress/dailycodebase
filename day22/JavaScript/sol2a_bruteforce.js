/**
 * @author MadhavBahlMD
 * @date 18/01/2019
 * Method - Bruteforce Search - Time complexity = O(m.n.p) // m, n, and p are the lengths of 3 input arrays
 */

function searchCommonElements (arr1, arr2, arr3) {
    let commonElements = [];

    for (let element of arr1)
        if (arr2.indexOf (element) >= 0)
            if (arr3.indexOf (element) >= 0)
                commonElements.push (element);
    
    return commonElements;
}

console.log (searchCommonElements ([1, 4, 6, 2, 3, 7, 8, 9], [2, 5, 4, 6, 8, 1], [1, 2, 3, 4]));
console.log (searchCommonElements ([1, 2, 4, 6, 7, 9, 11, 14, 15], [2, 3, 4, 5, 6, 7, 8, 9], [2, 4, 6, 8]));