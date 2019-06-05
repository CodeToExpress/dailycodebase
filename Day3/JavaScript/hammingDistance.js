/*
 * @author Nomit Pahuja
 * date: 09/02/2018
 */

function hamming (str1, str2) {
    let distance = 0;

    //Check the length of strings
    if (str1.length !== str2.length) {
        console.log("Please enter strings of same length.");
        return -1;
    }

    //Find the hamming distance
    for (let i = 0; i < str1.length ; i++) {
        if(str1[i] !== str2[i]) {
            distance++;
        }
    }

    //Print the hamming distance
    console.log(`The hamming distance between the strings : ${str1} and ${str2} is ${distance}`);
    return distance;
}

hamming("strawberry","avocado");
hamming("john","taylor");
hamming("issac","rahul");