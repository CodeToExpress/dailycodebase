// Step 1: Declare an empty object letterCount which will store characters as keys and their frequencies as values.
// Step 2: Iterate through each character of input string and add it to the object if it doesn't already exist, else increment its’s value
// Step 3: Find the key with maximum value in the letterCount object.

function maxChars (str) {
    let letterCount = {};

    // Complete the letter count object
    for(let currentChar of str) {
        let flag = 0;
        for (letter in letterCount) {
            if (currentChar.toLowerCase() === letter) {
                flag = 1;
                letterCount[letter]++;
            }
        }

        if (flag === 0) {
            letterCount[currentChar] = 1;
        }
    }

    // Find the maximum value key from the letterCount
    let max = 0, maxChar = '';
    for (letter in letterCount) {
        if (letterCount[letter] >= max) {
            max = letterCount[letter];
            maxChar = letter;
        }
    }

    // Print the result
    console.log(`The maximum frequency letter is: "${maxChar}" and it appears ${letterCount[maxChar]} number of times!`);
    return letterCount[maxChar];
}

maxChars('helllllo worlld');