// Step 1: Set count = 0
// Step 2: Run a loop from i=0 to i=string_length
// Step 3: In each iteration check whether the character at position i is ‘a’, ‘e’, ‘i’, ‘o’, or ‘u’. If the condition passes, increment the value of count.
// Step 4: Print and return the results.

function numVowels (str) {
    let count = 0;

    for (let i=0; i<str.length; i++) {
        if (
            str[i].toLowerCase() === 'a' ||
            str[i].toLowerCase() === 'e' ||
            str[i].toLowerCase() === 'i' ||
            str[i].toLowerCase() === 'o' ||
            str[i].toLowerCase() === 'u' 
        ) {
            count++;
        }
    }

    console.log (`The number of vowels in ${str} is = ${count}`);
}

numVowels ('hello');
numVowels ('Greetings');