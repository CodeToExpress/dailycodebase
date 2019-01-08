/**
 * @author MadhavBahlMD
 * @date 08/01/2018
 */

function sumDigits (num) {
    if (num/10 < 1)
        return num;
    else
        return (num % 10) + sumDigits (parseInt(num/10));
}

let num1 = 12345, num2 = 91827;
console.log(`Sum of digits of ${num1} is ${sumDigits(num1)}`);
console.log(`Sum of digits of ${num2} is ${sumDigits(num2)}`);