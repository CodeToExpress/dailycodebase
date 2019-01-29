/**
 * @author MadhavBahlMD
 * @date 08/01/2018
 * METHOD - We keep thte second argument (num2) positive and add the first arguement num2(second arg) times
 */

function recursiveProd (num1, num2) {
    // If num 2 becomes 1, return num1
    if (num2 === 1)
        return num1;

    // If any of the numbers is zero, return 0
    if (num1 === 0 || num2 === 0)
        return 0;

    // If both numbers are less than zero negative signs can be removed
    if (num1 < 0 && num2 < 0)
        return recursiveProd (-1*num1, -1*num2);
    else if (num2 < 0)
        return recursiveProd (num2, num1);
    else 
        return num1 + recursiveProd(num1, num2-1);
}

let n1 = 5, n2 = 10;
console.log (`${n1} x ${n2} = ${recursiveProd(n1, n2)}`);
let n3 = -8, n4 = 4;
console.log (`${n3} x ${n4} = ${recursiveProd(n3, n4)}`);
let n5 = 2, n6 = -7;
console.log (`${n5} x ${n6} = ${recursiveProd(n5, n6)}`);
let n7 = -4, n8 = -7;
console.log (`${n7} x ${n8} = ${recursiveProd(n7, n8)}`);