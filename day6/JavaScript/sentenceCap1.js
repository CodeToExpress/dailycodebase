    
function capitalize (str) {
    // spit the string to array
    let wordArr = str.split(' ');
    
    // loop through each element of array and capitalize the first letter

    for (let i=0; i<wordArr.length; i++) {

        // Some people might proceed like this, but strings are immutable
        // let currentWord = wordArr[i];
        // currentWord[0] = currentWord[0].toUpperCase();
        // console.log(currentWord);

        // Append the first letter (capitalized)
        let currentWord = '';
        currentWord += wordArr[i][0].toUpperCase();
        
        // Append the rest of the word (can be easily done by String slice)
        for (let j=1; j<wordArr[i].length; j++) {
            currentWord += wordArr[i][j];
        }

        // replace the current word by currentWord
        wordArr[i] = currentWord;
    }

    // join the array into string
    return wordArr.join(' ');
}

console.log(capitalize ('hello world'));