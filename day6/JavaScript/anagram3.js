/**
 * @author MadhavBahl
 * @date 27/12/2018
 * A simple method which first compares the lengths of strings and then iterates through the characters of any string and check whether it exists in the other one as well and does same for the other string
 * Please note that this is not at all an efficient method. Do not use this.
 */

function anagram (str1, str2) {
    let len1 = str1.length,
        len2 = str2.length;

    // Lengths of both strings must be same
    if (len1 !== len2) {
        console.log ('Invalid Input');
        return -1;
    }

    // check characters of string 1 are there in string 2
    let flag = 1;
    for (let char of str1) {
        if (str2.indexOf(char) < 0) {
            flag = 0;
            break;
        }
    }

    if (flag !== 1) {
        console.log (`${str1} and ${str2} are not Anagrams`);
        return 0;
    }

    for (let char of str2) {
        if (str1.indexOf(char) < 0) {
            flag = 0;
            break;
        }
    }

    if (flag !== 1) {
        console.log (`${str1} and ${str2} are not Anagrams`);
        return 0;
    } 
    else {
        console.log (`${str1} and ${str2} are Anagrams`);
        return 1;
    }
}

anagram ('LISTEN', 'SILENT');