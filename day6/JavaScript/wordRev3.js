/**
 * @author MadhavBahlMD
 * @date 27/12/2018
 */

// Without inbuilt reverse or split, a straightforward method

function wordRev (line) {
    // iterate through the string and add each word in a new array (splitting it on white space)
    let words = [], count = 0, word = '';

    for (let i=0; i<line.length; i++) {
        if (line[i] !== ' ') {
            word += line[i];
        } else {
            words[count] = word;
            word = '';
            count++;
        }
    }
    // Add the last word as well to the words array as well
    words[count] = word;
    count++;

    // Reverse the words
    let temp;
    for (let i=0; i<count; i++) {
        temp = '';
        for (let j=words[i].length-1; j>=0; j--) {
            temp += words[i][j];
        }
        words[i] = temp;
    }

    // join the elements (Ok, let's not use the traditional join() method -_-)
    let reversed = '';
    for (let i=0; i<count; i++) {
        if (i!=count-1) {
            reversed += words[i] + ' ';
        } else {
            reversed += words[i];
        }
    }

    // print the result
    return reversed;
}

console.log(wordRev ('hello world greetings'));