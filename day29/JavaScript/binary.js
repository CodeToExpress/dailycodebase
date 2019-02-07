function binary (arr, n) {
    let left = 0,
        right = arr.length - 1, mid;

    while (left <= right) {
        mid = Math.floor((left + right)/2);
        if (arr[mid] === n)  return mid;
        else if (arr[mid] < n)  left = mid+1;
        else right = mid-1;
    }

    return -1;
}

console.log (binary ([1, 2, 3, 4, 5, 6, 7, 8, 9], 5)); // 4