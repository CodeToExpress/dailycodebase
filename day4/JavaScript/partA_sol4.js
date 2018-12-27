// Step 1: Set count = 0
// Step 2: Store the vowels in an object (vowels) with initial values as zero
// Step 3: Iterate through each character of string and check whether it exists in the vowels object
// Step 4: If it exists, increment its value, and the value of count variable
// Step 5: Print the result

function numVowels (str) {
    let count = 0;
    let vowels = {
        'a': 0,
        'e': 0,
        'i': 0,
        'o': 0,
        'u': 0
    };

    for (let char of str) {
        // if (vowels[char]) {
        //     vowels [char]++;
        //     count++;
        // }

        for (vowel in vowels) {
            if (char.toLowerCase() === vowel) {
                count++;
                vowels[vowel]++
            }
        }
    }

    console.log (`The number of vowels in ${str} is = ${count}`);

}

numVowels ('hello');
numVowels ('Greetings');