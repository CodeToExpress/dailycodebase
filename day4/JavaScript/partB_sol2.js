// Answer similar to first solution, but Step 2 has been replaced by a one liner

function maxChars (sentence) {
    let characters = {};

    // Update characters object with count of each character in sentence
    for (let letter of sentence) {
        // increment the count of existing letter OR add the new character with value = 1
        characters[letter] = characters[letter] + 1 || 1;
    }

    let max = 0,
      maxChar = '';

    for (let character in characters) {
        if (max < characters[character]) {
            max = characters[character];
            maxChar = character;
        }
    }

    // Print the result
    console.log(`The maximum frequency letter is: "${maxChar}" and it appears ${characters[maxChar]} number of times!`);
    return characters[maxChar];    
}

maxChars('helllllo worlld');