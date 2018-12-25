// Step 1: Set count = 0
// Step 2: Store the vowels in an array (say, vowels)
// Step 3: Run a loop from i=0 to i=string_length
// Step 4: In each iteration, run a nested loop from j=0 to j<5 (5 vowels), and check whether string[i] exists in vowels[j].
// Step 5: Increment the count if the above condition is satisfied.
// Step 6: Print the result

function numVowels (str) {
    let count = 0;
    let vowels = ['a', 'e', 'i', 'o', 'u'];

    for (let char of str) {
        for (let vowel of vowels) {
            if (char.toLowerCase() === vowel)  count++;
        }
    }

    console.log (`The number of vowels in ${str} is = ${count}`);
}

numVowels ('hello');
numVowels ('Greetings');