/**
 * @author MadhavBahlMD
 * @date 18/01/2019
 * Method - Brute force Search
 */

function searchCommonElements (arr1, arr2) {
    let commonElements = [];

    for (let i=0; i<arr1.length; i++) 
        for (let j=0; j<arr2.length; j++) {
            if (arr1[i] === arr2[j])
                commonElements.push (arr1[i]);
        }

    return commonElements;
}

console.log (searchCommonElements ([1, 2, 3, 4, 5, 6, 7], [4, 2, 9, 1]));
console.log (searchCommonElements ([0, 12, 41, 20], [9, 3, 1, 5]));