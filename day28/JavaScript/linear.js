function linearSearch (arr, n) {
    for (let i=0; i<arr.length; i++) 
        if (arr[i] === n)
            return i;

    return undefined;
}

console.log (linearSearch ([1, 2, 3, 4, 5], 2));
console.log (linearSearch ([1, 2, 3, 4, 5], 7));