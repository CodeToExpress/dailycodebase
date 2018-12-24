function hammingDistance (str1, str2) {
    let size1 = str1.length,
      size2 = str2.length,
      distance = 0;

    // Check if the strings are of equal length
    if (size1 !== size2) {
        console.log ("The strings \"" + str1 + "\" and \"" + str2 + "\" do not have equal lengths");
        return -1;
    }

    // Check the different characters at corresponding positions
    for (let i=0; i<size1; i++) {
        if (str1[i] !== str2[i]) {
            distance++;
        }
    }

    // Print the result and return the hamming distance
    console.log(`The hamming distance between "${str1}" and "${str2}" is ${distance}`);
    return distance;
}

hammingDistance('karolin', 'kathrin');
hammingDistance('karolin', 'kerstin');
hammingDistance('1011101', '1001001');
hammingDistance('2173896', '2233796');