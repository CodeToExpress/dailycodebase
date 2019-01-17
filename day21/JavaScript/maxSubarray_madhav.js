/**
 * @author MadhavBahlMD
 * @date 17/01/2019
 * Method - Bruteforce Search -- Worst Case Complexity = O(m.n)
 */

function maxSubarraySum (arr, n) {
    let max = 0;

    for (let i=0; i<arr.length - n + 1; i++) {
        let currentSum = 0;

        for (let j=i; j<i+n; j++) 
            currentSum += arr[j];
        
        if (currentSum > max)
            max = currentSum;
    }

    return max;
}

console.log (maxSubarraySum ([1, 3, 2, 4, 7, 5, 4], 3)); // 16