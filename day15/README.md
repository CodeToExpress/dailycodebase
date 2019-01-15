![cover](./cover.png)

# Day 15 - Recursion Series Part C

Today's Problem - Pascal's Triangle

**Question** -- Write a function that takes an integer n as input and prints first n lines of Pascal's Triangle

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

## C++ Implementation

### [Solution](./C++/pascalDay15.cpp)

```cpp
/**
 * @author:divyakhetan
 * @date: 10/1/2019
 */


#include<bits/stdc++.h>
using namespace std;


int sum(int n){
	if(n < 10) return n;
	else return n % 10 + sum(n /10);
}
int main(){
	int n;
	cin >> n;
	cout << "The sum of digits is " << sum(n);
	return 0;
}
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

## Python Implementation

### [Solution] (./Python/pascal.py)

```ruby
=begin
@author:aaditkamat
@date: 9/1/2019
=end

def fill_table(num)
  table = []

  (num).times do
    table.push([].fill(0, 0, num))
  end

  num.times do |i|
    table[i][0] = 1
  end

  i = 1
  until i >= num do
    j = 1
    until j >= num do
      table[i][j] = table[i - 1][j] + table[i - 1][j - 1]
      j += 1
    end
    i += 1
  end
  table
end

def print_table(table)
  i = 0

  until i >= table.length do
    j = 0
    until j >= table.length do
      if table[i][j] != 0
        print "#{table[i][j]} "
      end
      j += 1
    end
    print "\n"
    i += 1
  end
end

def main
  print "Enter a number:"
  num = gets.chomp!.to_i
  if num >= 1
    table = fill_table(num)
    print_table(table)
  else
    puts "Pascal triangle cannot have #{num} rows"
  end
end

main
```

## Ruby Implementation

### [Solution] (./Ruby/pascal.rb)

```ruby
"""
@author:aaditkamat
@date: 9/1/2019
"""

def fill_table(num):
  table = []

  for i in range(num):
        table.append([0] * num)

  for i in range(num):
    table[i][0] = 1

  for i in range(1, num):
    for j in range(1, num):
      table[i][j] = table[i - 1][j] + table[i - 1][j - 1]

  return table

def print_table(table):
  str = ''
  for i in range(len(table)):
    for j in range(len(table)):
      if table[i][j] != 0:
        str += f'{table[i][j]} '
    str += '\n'
  print(str)

def main():
  print("Enter a number:")
  num = int(input())
  if num >= 1:
    table = fill_table(num)
    print_table(table)
  else:
    print(f'Pascal triangle cannot have {num} rows')

main()
```

## Java Implementation

### [Solution](./Java/PascalTriangle.java)

```java
/**
 * @date 09/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class PascalTriangle {
    public static int pascal(int r,int c)
    {
        if(r==c || c==0)
            return 1;
        else
            return pascal(r-1,c)+pascal(r-1,c-1);
    }
    public static void print(int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
                System.out.print(pascal(i,j)+" ");
            System.out.println();
        }
    }
     public static void main(String []args)
     {
         Scanner sc=new Scanner(System.in);
         int n;
         n=sc.nextInt();
         print(n);
     }
}
```