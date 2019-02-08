/**
 * Fibonacci Series Using Recursion
 * @author MadhavBahlMD
 * @date 18/01/2019
 */

function fibonacci (n) {
    if (n <= 2) return 1;
    return fibonacci (n-1) + fibonacci (n-2);
}

console.log ('7th element in fibonacci series is:', fibonacci(7));