/** FOR SORTED ARRAY
 * @author MadhavBahlMD
 * @date 18/01/2019
 * Method - Multiple Pointers 
 * NOTE - For this method, We are assuming that the arrays are sorted. 
 * Time Complexity = O(m+n)
 */

function searchCommonElements (arr1, arr2) {
    let commonElements = [],
        i = 0,
        j = 0;
    
    while (i < arr1.length && j < arr2.length) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr1[i] > arr2[j])
            j++;
        else {
            commonElements.push (arr1[i]);
            i++; j++;
        }
    }

    return commonElements;
}

console.log (searchCommonElements ([1, 2, 3, 5, 7, 9, 12], [3, 4, 5, 6, 7]));