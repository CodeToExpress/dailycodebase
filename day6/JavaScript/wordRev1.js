function wordRev (line) {
    // Split the line
    let words = line.split(' ');

    // reverse each word
    for (let i=0; i<words.length; i++) {
        words[i] = words[i].split('').reverse().join('');
    }

    // Join and return
    return words.join(' ');
}

console.log (wordRev("hello world Greetings"));