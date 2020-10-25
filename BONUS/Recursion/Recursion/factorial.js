/**
 * Factorial usinig recursion
 * @author MadhavBahl
 * @date 18/01/2019
 */

function findFactorial (num) {
    if (num <= 1)  return 1;
    return num*findFactorial(num-1);
}

console.log ('Factorial of 5 is: ', findFactorial(5));