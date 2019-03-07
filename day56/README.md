![cover](./cover.png)

# Day 56 - Memoized Fibonacci

Ques) Write a program to find the Nth term in fibonacci series using recursion, and then optimize your solution using memoizaion.

## Solution

## JavaScript Implementation

### [Solution](./JavaScript/memoizedFibonacci.js)

```js
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
```