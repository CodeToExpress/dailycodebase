/**
 * @author MadhavBahlMD
 * @dete 18/01/2019
 * Method - Using JavaScript's `indexOf()` method
 */

function searchCommonElements (arr1, arr2) {
    let commonElements = [];

    for (let element of arr1)
        if (arr2.indexOf (element) >= 0)
            commonElements.push (element);
    
    return commonElements;
}

console.log (searchCommonElements ([1, 2, 3, 4, 5, 6, 7], [4, 2, 9, 1]));
console.log (searchCommonElements ([0, 12, 41, 20], [9, 3, 1, 5]));