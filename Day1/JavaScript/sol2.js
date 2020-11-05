/**
 * @author MadhavBahl
 * @date 20/12/2018
 */

// Step 1: Run a loop from 1 to n, for reach iteration (i) perform the next steps
// Step 2: Declare a temporary empty string (inside loop, say output) 
// Step 3: If i is divisible by 3, append Fizz to the output.
// Step 4: If i is divisible by 5, append Buzz to the output.
// Step 5: If output is still an empty string, set it equal to i
// Step 6: Print output.

function fizzbuzz (num) {
    for (let i=1; i<=num; i++) {
        let opStr = '';

        if (i%3 === 0)  opStr += 'Fizz';
        if (i%5 === 0)  opStr += 'Buzz';

        if (opStr === '')  opStr = i;
        
        console.log (opStr);
    }
}

fizzbuzz (17);