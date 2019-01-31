/** FOR SORTED ARRAYS
 * @author MadhavBahlMD
 * @date 18/01/2019
 * Method - Multiple Pointers 
 * NOTE - For this method, We are assuming that the arrays are sorted. 
 * Time Complexity = O(m+n+p)
 */

function searchCommonElements (arr1, arr2, arr3) {
    let commonElements = [],
        i=0, j=0, k=0;
    
    while (i<arr1.length && j<arr2.length && k<arr3.length) {
        if (arr1[i] === arr2[j] && arr1[i] === arr3[k]) {
            commonElements.push (arr1[i]);
            i++; j++; k++;
        } else if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr3[k])
            j++;
        else
            k++;
    }

    return commonElements;
}

console.log (searchCommonElements ([1, 2, 4, 6, 7, 9, 11, 14, 15], [2, 3, 4, 5, 6, 7, 8, 9], [2, 4, 6, 8])); // [2, 4, 6]