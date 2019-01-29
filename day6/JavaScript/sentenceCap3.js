function capitalize (str) {
    let result = str[0].toUpperCase();

    for (let i=1; i<str.length; i++) {
        if (str[i-1] === ' ') {
            result += str[i].toUpperCase();
        } else { 
            result += str[i];
        }
    }

    return result;
}