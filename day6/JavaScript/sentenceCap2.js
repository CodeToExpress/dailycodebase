function capitalize (str) {
    // declare an empty array
    let capitalied = [];

    // loop through each word and capitalize the first letter
    for (let word of str.split(' ')) {
        capitalied.push(word[0].toUpperCase() + word.slice(1));
    }

    // join the array into string
    return capitalied.join(' ');
}