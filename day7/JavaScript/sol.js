/**
 * @author MadhavBahl
 * @date 28/12/2018
 * METHOD - Consider the 3 cases separately, 
 *   1) If difference in lengths is more than 1 then print no and exit 
 *   2) If the length is same and the hamming distance is 1, print yes
 *   3) If difference in length equals 1, then loop through the bigger string and check for the corresponding elements of smaller string
 */

function oneEditAway (str1, str2) {
    let len1 = str1.length,
        len2 = str2.length;
    
        if (Math.abs(len1-len2) > 1) {
            // If difference in lengths is greater than 1
            console.log (`Strings "${str1}" and "${str2}" are not one edit away`);
            return 0;
        } else if(len1 === len2) {
            // if lengths are equal
            let count = 0;

            for (let i=0; i<len1; i++) {
                if (str1[i] !== str2[i])    count++;
            }

            if (count < 2) {    // hamming distance is 0 or 1
                console.log (`Strings "${str1}" and "${str2}" are one edit away`);
                return 1;
            } else {            // hamming distance >= 2
                console.log (`Strings "${str1}" and "${str2}" are not one edit away`);
                return 0;
            }

        } else {
            // Difference in lenghts = 1
            if (len1 > len2)    return checkOneEdit (str1, str2);
            else    return checkOneEdit (str2, str1);
        }
}

function checkOneEdit (str1, str2) {
    let edit = 0, j=0;
    for (let i=0; i<str1.length; i++) {
        if (str1[i] !== str2[j]) {
            edit++;
        } else {
            j++;
        }
    }
    
    if (edit >= 2) {
        console.log (`Strings "${str1}" and "${str2}" are not one edit away`);
        return 0;
    } else {
        console.log (`Strings "${str1}" and "${str2}" are one edit away`);
        return 1;
    }
}

// Test Cases
oneEditAway ('abc', 'abc'); // true
oneEditAway ('abc', 'abd'); // true
oneEditAway ('abc', 'ab'); // true
oneEditAway ("a", "a");  // true
oneEditAway ("abcdef", "abqdef");  // true
oneEditAway ("abcdef", "abccef");  // true
oneEditAway ("abcdef", "abcde");  // true
oneEditAway ("aaa", "abc");  // false
oneEditAway ('bc', 'abc'); // true
oneEditAway ('abc', 'abced'); // false