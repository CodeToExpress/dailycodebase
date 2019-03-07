function memoize (func) {
    const cache = {}
    return function (...args) {
        if (cache [args]) {
            return cache [args];
        }

        const result = func.apply (this, args);
        cache [args] = result;

        return result;
    }
}

function slowFib (n) {
    if (n<2)
        return n;
    return slowFib (n-1) + slowFib (n-2);
}

const fib = memoize (slowFib);

console.log (fib (15));