/**
 * @author MadhavBahl
 * @date 20/12/2018
 */

 // Method 1 (The general approach)
// Step 1: Run a loop from 1 to n, for reach iteration (i) perform the next steps
// Step 2: if i is divisible by both 3 and 5, print “FizzBuzz”
// Step 3: if above condition fails, and i is divisible by 3, print “Fizz”
// Step 4: if above condition fails, and i is divisible by 5, print “Buzz”
// Step 5: if all conditions fails, print i itself.

function fizzbuzz (num) {
    for (let i=1; i<=num; i++) {
        if (i%3 === 0 && i%5 === 0)
            console.log ("FizzBuzz");
        else if (i%3 === 0)
            console.log ("Fizz");
        else if (i%5 === 0)
            console.log ("Buzz");
        else
            console.log (i);
    }
}

fizzbuzz (17);