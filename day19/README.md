![cover](./cover.png)

# Day 19 - Array Series Part 2

**Cartesian Product and Fisher-Yates Shuffle Algorithm**

## Ques A - Cartesian Product of Two Sets

**Question** -- Given 2 sets A and B, write a program to print the cartesian product of A and B.

#### Cartesian Product

In set theory a Cartesian product is a mathematical operation that returns a set (or product set or simply product) from multiple sets. That is, for sets A and B, the Cartesian product A × B is the set of all ordered pairs (a, b) where a ∈ A and b ∈ B

Source: [Wikipedia](https://en.wikipedia.org/wiki/Cartesian_product)

**Example**

```
input:
  A = [1, 2]
  B = [3, 4]
output:
[ 
    [1, 3],
    [1, 4],
    [2, 3],
    [2, 4]
]
```

## Ques B - Fisher-Yates Shuffle Algorithm

**Question** - Given an array, write a function that returns an array with shuffled elements form the original array

**Example**

```
input: [1, 2, 3, 4, 5, 6]
output: [3, 1, 4, 2, 5, 6]
```

### Fisher-Yates Shuffle Algorithm

The Fisher–Yates shuffle is an algorithm for generating a random permutation of a finite sequence—in plain terms, the algorithm shuffles the sequence. The algorithm effectively puts all the elements into a hat; it continually determines the next element by randomly drawing an element from the hat until no elements remain. The algorithm produces an unbiased permutation: every permutation is equally likely.

The Fisher–Yates shuffle is named after Ronald Fisher and Frank Yates, who first described it, and is also known as the Knuth shuffle after Donald Knuth.

#### Algorithm

1. Write down the numbers from 1 through N.
2. Pick a random number k between one and the number of unstruck numbers remaining (inclusive).
3. Counting from the low end, strike out the kth number not yet struck out, and write it down at the end of a separate list.
4. Repeat from step 2 until all the numbers have been struck out.
5. The sequence of numbers written down in step 3 is now a random permutation of the original numbers.

source: [wikipedia (https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle)](https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle)

![ques](./ques.png)

# Solution

## Ques A

**Question** -- Given 2 sets A and B, write a program to print the cartesian product of A and B.

### JavaScript Implementation

#### [Solution by @MadhavBahlMD](./JavaScript/cartesian_madhav.js)

```js
/**
 * @author MadhavBahlMD
 * @date 15/01/2018
 * Method: Use nested loop to generate the 2D matrix
 */

function cartesian (arr1, arr2) {
    if (arr1.length === 0 || arr2.length === 0) return null;

    let cartesianProduct = [];

    for (let arr1Element of arr1) {
        for (let arr2Element of arr2) {
            cartesianProduct.push([arr1Element, arr2Element]);
        }
    }

    return cartesianProduct;
}

console.log (cartesian ([1, 2], [3, 4]));
console.log (cartesian ([1, 2], []));
console.log (cartesian ([1, 2, 3, 4], ['a', 'b', 'c']));
```

### Python Implementation

### [Solution](./Python/cartesian_product.py)
```python
'''
@author: aaditkamat
@date: 15/1/2019
'''
import sys
sys.path.append('../../day18/Python')

from frequency_counter import convert_input_array_to_list

def get_input(word):
    print (f'Enter set {word}: ', end='')
    input_array = input()
    lst = convert_input_array_to_list(input_array)
    return set(lst)

def calculate_cartesian_product(first_set, second_set):
    result = []
    for num in first_set:
        for other in second_set:
            result.append([num, other])
    print(result)

def main():
    set_A = get_input('A')
    set_B = get_input('B')
    calculate_cartesian_product(set_A, set_B)
```
***

### Python Implementation

#### [Solution by @vishalshirke7](./Python/Cartesian.py)

```python
"""
  @author : vishalshirke7
  @date : 15/01/2019
"""

import itertools


def cartesian1(*iplists):   # method 1 using product function
    for element in itertools.product(*iplists):
        print(element)


def cartesian2(ip1, ip2):   # method 2 using iteration
    if not ip1 or not ip2:
        return None
    cartesian_product = []
    for i in ip1:
        for j in ip2:
            cartesian_product.append((i, j))

    return cartesian_product


ip1 = list(map(int, input().split()))
ip2 = list(map(int, input().split()))
cartesian1(ip1, ip2)
cartesian = cartesian2(ip1, ip2)
for i in cartesian:
    print(i)
```


## Ques B

**Question** -- Given an array, write a function that returns an array with shuffled elements form the original array

### JavaScript Implementation

#### [Solution (using recursion)](./JavaScript/fisherYates_madhav.js)

```js
/**
 * Fisher Yates Shuffle Algorithm
 * Implemented in JavaScript by @MadhavBahlMD
 * Algorithm
 *   Step 1: Write down the numbers from 1 through N.
 *   Step 2: Pick a random number k between one and the number of unstruck numbers remaining (inclusive).
 *   Step 3: Counting from the low end, strike out the kth number not yet struck out, and write it down at the end of a separate list.
 *   Step 4: Repeat from step 2 until all the numbers have been struck out.
 *   Step 5: The sequence of numbers written down in step 3 is now a random permutation of the original numbers.
 * Method used - Helper Method Recursion
 */

function fisherYates (arr) {
    let shuffledArr = [];
    console.log (`Original Array: ${arr}`);
    
    function shuffle (toBeShuffled) {
        // Base Case
        if (toBeShuffled.length === 0)  return;
        
        // Push inro shuffled array
        let index = Math.floor(Math.random()*toBeShuffled.length);
        shuffledArr.push (toBeShuffled[index]);

        // Shuffle the remaining array
        toBeShuffled.splice (index, 1);
        shuffle (toBeShuffled);
    }
    
    shuffle (arr);
    console.log (`Shuffled Array: ${shuffledArr}`);
}

fisherYates ([1, 2, 3, 4, 5, 6]);
```

### Python implementation

#### [Solution](./Python/fisher_yates.py)

```python
import sys
sys.path.append('../../day18/Python')

from frequency_counter import convert_input_array_to_list, handle_input
from random import randint

def fisher_yates(lst):
    for i in range(len(lst) - 1, 0, -1):
        swap_index = randint(0, i)
        temp = lst[swap_index]
        lst[swap_index] = lst[i]
        lst[i] = temp
    print(lst)

def main():
    lst = handle_input('an')
    fisher_yates(lst)

main()
```