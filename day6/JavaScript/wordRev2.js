function wordRev (line) {
    let reversed = [];

    for(let word of line.split(' ')) {
        reversed.push(word.split('').reverse().join(''));
    }

    return reversed.join(' ');
}

console.log (wordRev("  hello  wow   world Greetings"));