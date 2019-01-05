/**
 * @author MadhavBahlMD
 * @date 04/01/2018
 * In this case, the worst case Time Complexity will be O(m.n), 
 * m and n are the lengths of string and pattern respectively.
 */

function substringSearch (str, pattern) {
    let strLen = str.length,
        patLen = pattern.length,
        flag = 0;

    for (let i=0; i<(strLen-patLen+1); i++) {
        if (str[i] === pattern[0]) {
            flag = 1;
            for (let j=1; j<patLen; j++) {
                if (str[i+j] !== pattern[j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag === 1) {
                console.log (i);
                return i;
            } 
        }
    }

    console.log (-1);
    return -1;
}

substringSearch ("helloworld", "world");
substringSearch ("abcrxyzgf", "xyz");