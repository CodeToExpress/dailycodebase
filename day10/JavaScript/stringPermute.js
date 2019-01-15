function stringPermutations (str) {
    let permutations = [];

    if (str.length <= 1) {
        permutations.push (str);
        return permutations;
    } else {
        for (let i=0; i<str.length; i++) {
            let start = str[i],
                remainingString= str.slice(0, i) + str.slice(i+1),
                permutationsforRemainingString = stringPermutations(remainingString);
            
            for (let j=0; j<permutationsforRemainingString.length; j++) {
                permutations.push (start + permutationsforRemainingString[j]);
            }
        }
    }

    return permutations;
}

console.log (stringPermutations('123'));