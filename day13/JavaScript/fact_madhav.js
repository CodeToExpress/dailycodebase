/**
 * @author MadhavBahl
 * @date 07/01/2018
 */

function factorial (num) {
    if (num <= 1)
        return 1;
    else
        return num * factorial (num-1);
}

console.log(`Factorial of 4 is: ${factorial(4)}`);
console.log(`Factorial of 5 is: ${factorial(5)}`);