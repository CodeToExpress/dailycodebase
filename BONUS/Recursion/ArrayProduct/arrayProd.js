/**
 * Find Product of array elements
 * @author MadhavBahl
 * @date 18/01/2019
 */

function findProduct (arr, num) {
    if (num <= 0)  return 1;
    return arr[num-1]*findProduct(arr, num-1);
}

let arr = [2, 3, 4, 5];
console.log ('Product of elements of [2, 3, 4, 5] is: ', findProduct (arr, arr.length));