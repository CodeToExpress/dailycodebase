![cover](./cover.png)

# Day 15 - Recursion Series Part C

Today's Problem - Pascal's Triangle

**Question** -- Write a function that takes an integer n as iniput and prints first n lines of Pascal's Triangle

**Example**

```
input: 5
output:
1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
```

![ques](./ques.png)

## JavaScript Implementation

### [Solution](./JavaScript/pascal_MadhavBahlMD)

```js
/**
 * @author MadhavBahlMD
 * @date 09/01/2018
 */

function findPascal (row, col) {
    if (col === 1 || col === row) {
        return 1;
    } else {
        return findPascal (row-1, col-1) + findPascal (row-1, col);
    }
}

function printPascal (num) {
    let currentRow;
    for (let i=1; i<=num; i++) {
        currentRow = '';
        for (let j=1; j<=i; j++) {
            currentRow += findPascal (i, j) + ' ';
        }
        console.log(currentRow);
    }    
}

console.log ('/* ===== Pascal\'s Triangle for n = 5\n');
printPascal (5);
console.log ('\n/* ===== Pascal\'s Triangle for n = 7\n');
printPascal (7);
```

## [C++ Solution by @profgrammer](./C++/profgrammer_pascal.cpp)
```cpp
/*
  *@author: profgrammer
  *@date: 09-01-2019
*/

#include <bits/stdc++.h>
using namespace std;

int ncr(int n, int r){
  if(n < r || n < 0 || r < 0) return 0;
  if(n == r || r == 0) return 1;
  return ncr(n-1,r) + ncr(n-1, r-1);
}

int main() {
  int n;
  cin>>n;
  for(int i = 0;i <= n;i++){
    for(int j = 0;j <= i;j++) cout<<ncr(i,j)<<" ";
    cout<<endl;
  }
}
```