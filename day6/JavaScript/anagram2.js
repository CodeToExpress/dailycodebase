/**
 * @author MadhavBahlMD
 * @date 27/12/2018
 * METHOD -- Prepare 2 objects which stores frequency of every character in both strings, compare those 2 objects  (dictionaries in python)
 */

function anagram (str1, str2) {
    let len1 = str1.length,
        len2 = str2.length;
    
    // Compare lengths
    if (len1 !== len2) {
        console.log ('Invalid Input');
        return -1;
    }

    // Make  frequency objects
    let countObj1 = {},
        countObj2 = {};

    for (let i=0; i<len1; i++) {
        countObj1[str1[i]] = countObj1[str1[i]] + 1 || 1;
    }

    for (let i=0; i<len2; i++) {
        countObj2[str2[i]] = countObj2[str2[i]] + 1 || 1;
    }

    // compare frequency objects
    // Please note that there is no direct way of comparing 2 objects.
    // We can either use some librries like Lowdash, or we can check the equality of each key value pair in objects, which is indeed a tedious task, but still, lets do it :)
    for (let key in countObj1) {
        if (countObj1[key] !== countObj2[key]) {
            console.log(`"${str1}" and "${str2}" are not Anagrams`);
            return 0;
        }
    }

    console.log(`"${str1}" and "${str2}" are Anagrams`);
}   

anagram ('LISTEN', 'MILENT');