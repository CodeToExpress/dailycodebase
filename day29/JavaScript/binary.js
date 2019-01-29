function binarySearch(arr, elem) {
    var start = 0;
    var end = arr.length - 1;
    var middle = Math.floor((start + end) / 2);
    while(arr[middle] !== elem && start <= end) {
        if(elem < arr[middle]){
            end = middle - 1;
        } else {
            start = middle + 1;
        }
        middle = Math.floor((start + end) / 2);
    }
    if(arr[middle] === elem){
        return middle;
    }
    return undefined;
}

console.log (binarySearch ([1, 2, 3, 4, 5, 8, 9], 8)); // 5
console.log (binarySearch ([1, 2, 3, 4, 5, 8, 9], 7)); // undefined