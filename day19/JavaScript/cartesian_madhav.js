/**
 * @author MadhavBahl
 * @date 15/01/2018
 * Method: Use nested loop to generate the 2D matrix
 */

function cartesian (arr1, arr2) {
    if (arr1.length === 0 || arr2.length === 0) return null;

    let cartesianProduct = [];

    for (let arr1Element of arr1) {
        for (let arr2Element of arr2) {
            cartesianProduct.push([arr1Element, arr2Element]);
        }
    }

    return cartesianProduct;
}

console.log (cartesian ([1, 2], [3, 4]));
console.log (cartesian ([1, 2], []));
console.log (cartesian ([1, 2, 3, 4], ['a', 'b', 'c']));