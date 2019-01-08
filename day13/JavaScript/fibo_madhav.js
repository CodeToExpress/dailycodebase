/**
 * @author MadhavBahlMD
 * @date 07/01/2018
 */

function nthElement (n) {
    if (n <= 2) 
        return 1
    else
        return nthElement(n-1) + nthElement(n-2);
}

function fibonacci (num) {
    // Print F(n)
    console.log (`The ${num}th element in fibonacci series is: ${nthElement(num)}`);
    
    // Print the sequence
    let seq = '';
    for (let  i=1; i<=num; i++) 
        if (i<num)
            seq += nthElement(i) + ', ';
        else
            seq += nthElement(i);
    console.log(`The sequence is: ${seq}`);
}

fibonacci (7);