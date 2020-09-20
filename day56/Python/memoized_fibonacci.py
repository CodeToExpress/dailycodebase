##
## @author 
## @date 20/09/2020
## Method: Create an array of size n + 1 to store the intermediate values calculated by the fibonacci function
## so that they don't need to be computed again. We can check whether the array has a particular value by seeing 
## what value is stored in the array. Since the array is filled with -1s (invalid values) by default, we do an 
## equality check to ensure that the value stored for the particular index is not equal to -1.
##  

def memoized_fibonacci(n, store):
    if store[n] != -1:
        return store[n]
    if n == 0 or n == 1:
        store[n] = n
        return n
    store[n] = memoized_fibonacci(n - 1, store) + memoized_fibonacci(n - 2, store)
    return store[n]

def fibonacci(n):
    return memoized_fibonacci(n, [-1] * (n + 1))

if __name__ == '__main__':
    assert fibonacci(50) == 12586269025
    assert fibonacci(0) == 0
    assert fibonacci(7) == 13
