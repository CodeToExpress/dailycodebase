/**
 * Finding `a` raised to the power `n` rercursively
 * @author MadhavBahl
 * @date 18/01/2019
 */

function findPower (a, n) {
    if (n <= 0)
        return 1;
    return a*findPower (a, n-1);
}

console.log ('5^2 = ', findPower (5, 2));