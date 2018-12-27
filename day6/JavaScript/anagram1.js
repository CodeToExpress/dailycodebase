/**
 * @author MadhavBahlMD
 * @date 27/12/2018
 * METHOD -- Check the lengths of both strings, sort them and then check whether they are same
 */

function anagram (str1, str2) {
    let len1 = str1.length,
        len2 = str2.length;
    
    // Compare lengths
    if (len1 !== len2) {
        console.log ('Invalid Input');
        return -1;
    }

    // sort the strings
    let sortedStr1 = str1.split('').sort().join(''),
        sortedStr2 = str2.split('').sort().join('');

    // Compare both strings
    if (sortedStr1 === sortedStr2) {
        console.log(`"${str1}" and "${str2}" are Anagrams`);
        return 1;
    } else {
        console.log(`"${str1}" and "${str2}" are not Anagrams`);
        return 0;
    }
}

anagram ('LISTEN', 'SILENT');