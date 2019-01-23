/**
 * @author MadhavBahlMD
 * @date 17/01/2019
 * Method - Sliding Wndow -- Solvable in O(m) time, m = array length
 */

function maxSubarraySum (arr, n) {
    let currentSum = 0;

    for (let i=0; i<n; i++) 
        currentSum += arr[i];

    let  max = currentSum;

    for (let i=n; i<arr.length; i++) {
        currentSum -= arr[i-n];
        currentSum += arr[i];

        if (currentSum > max)
            max = currentSum;
    }

    return max;
}

console.log (maxSubarraySum ([1, 3, 2, 4, 7, 5, 4], 3)); // 16