![cover](./cover.png)

# Day 16 - Recursion Series Part D

Today's Problem - Tower of Hanoi

## Tower of Hanoi

The Tower of Hanoi puzzle was invented by the French mathematician Edouard Lucas in 1883.

**Question** -- Given 3 rods and n disks, write a program to display the steps involved in moving the whole stack of rods from one rod to another given the following constraints:

1. Only one disk can be moved at a time
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack
3. No disk may be placed on top of a smaller disk

[read more...](http://interactivepython.org/runestone/static/pythonds/Recursion/TowerofHanoi.html)

![ques](./ques.png)

## JavaScript Implementation

### [Solution](./JavaScript/hanoi_MadhavBahlMD.js)

```js
/**
 * @source Geeks4Geeks: https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/
 * Implementaed in JavaScript by @MadhavBahlMD
 * @date 10/01/2019
 */

function towerOfHanoi (num, fromRod, toRod, auxRod) {
    if (num === 1) {
        console.log (`Move disk 1 from rod ${fromRod} to ${toRod}`);
        return 0;
    }

    towerOfHanoi (num-1, fromRod, auxRod, toRod);
    console.log (`Move disk ${num} from rod ${fromRod} to ${toRod}`);
    towerOfHanoi (num-1, auxRod, toRod, fromRod);
}

console.log ('/* ===== for 2 disks ===== */');
towerOfHanoi (2, 'A', 'C', 'B');
console.log ('\n/* ===== for 3 disks ===== */');
towerOfHanoi (3, 'A', 'C', 'B');
```

```python
#Implementaed in Python3 by @hiteshsubnani0128
#reffered geekforgeeks.com
#@date 10/01/2019

def toh(n,a,b,c):
    if n == 1:
        print("Move disk 1 from rod",a,"to rod",c)
        return
    toh(n-1, a, b, c)
    print("Move disk",n,"from rod",a,"to rod",b)
    toh(n-1, a, b, c)

num = int(input("enter a number"))
if num == 0:
    print("Not Possible")
else:
    toh(num,'a','b','c')
```
