// Step 1: Set count = 0
// Step 2: Store the vowels in an array (say, vowels)
// Step 3: Run a loop from i=0 to i=string_length
// Step 4: In each iteration check whether the current character (at position i) of the string is there in the vowels array using indexOf() method
// Step 5: Increment the count if the above condition is satisfied.
// Step 6: Print the result

function numVowels (str) {
    let count = 0;
    let vowels = ['a', 'e', 'i', 'o', 'u'];

    // Iterate  over each character in the string
    for (let i=0; i<str.length; i++) {
        if (vowels.indexOf(str[i].toLowerCase()) > 0) {
            count++;
        }
    }

    console.log (`The number of vowels in ${str} is = ${count}`);
}

numVowels ('hello');
numVowels ('Greetings');