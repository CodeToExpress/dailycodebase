![Fizz Buzz](./cover.png)

# Day 1 -- The Fizz Buzz Challenge

**Brief History** - Fizz Buzz is a group word game for children to teach them about division. Players take turns to count incrementally, replacing any number divisible by three with the word "fizz", and any number divisible by five with the word "buzz" and any number divisible by both three and five is replaced with the word "fizzbuzz"

> For example, a typical round of fizz buzz would start as follows:
> 1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, Fizz Buzz, 16, 17, Fizz, 19, Buzz, Fizz, 22, 23, Fizz, Buzz, 26, Fizz, 28, 29, Fizz Buzz, 31, 32, Fizz, 34, Buzz, Fizz, …

**Question**- Write a program that prints the numbers from 1 to n and for multiples of '3' print "Fizz" instead of the number, for the multiples of '5' print "Buzz", and for the numbers which are divisible by both 3 and 5, print FizzBuzz.

![ques for Day 1](./questionDay1.png)

## JavaScript Implementation

### [Solution 1](./JavaScript/sol1.js)

```js
/**
 * @author MadhavBahlMD
 * @date 20/12/2018
 */

 // Method 1 (The general approach)
// Step 1: Run a loop from 1 to n, for reach iteration (i) perform the next steps
// Step 2: if i is divisible by both 3 and 5, print “FizzBuzz”
// Step 3: if above condition fails, and i is divisible by 3, print “Fizz”
// Step 4: if above condition fails, and i is divisible by 5, print “Buzz”
// Step 5: if all conditions fails, print i itself.

function fizzbuzz (num) {
    for (let i=1; i<=num; i++) {
        if (i%3 === 0 && i%5 === 0)
            console.log ("FizzBuzz");
        else if (i%3 === 0)
            console.log ("Fizz");
        else if (i%5 === 0)
            console.log ("Buzz");
        else
            console.log (i);
    }
}

fizzbuzz (17);
```

### [Solution 2](./JavaScript/sol2.js)

```js
/**
 * @author MadhavBahlMD
 * @date 20/12/2018
 */

// Step 1: Run a loop from 1 to n, for reach iteration (i) perform the next steps
// Step 2: Declare a temporary empty string (inside loop, say output)
// Step 3: If i is divisible by 3, append Fizz to the output.
// Step 4: If i is divisible by 5, append Buzz to the output.
// Step 5: If output is still an empty string, set it equal to i
// Step 6: Print output.

function fizzbuzz (num) {
    for (let i=1; i<=num; i++) {
        let opStr = '';

        if (i%3 === 0)  opStr += 'Fizz';
        if (i%5 === 0)  opStr += 'Buzz';

        if (opStr === '')  opStr = i;

        console.log (opStr);
    }
}

fizzbuzz (17);
```

## Java Implementation

### [Solution 1](./Java/Fizzbuzz.java)

```java
/**
 * @author: MadhavBahlMD
 * @date: 20/12/2018
 */

import java.util.Scanner;

public class Fizzbuzz {
    public static void main(String[] args) {

        System.out.println("/* ===== Fizz Buzz ===== */");
        Scanner input = new Scanner(System.in);
        System.out.print("\nEnter a number: ");
        int n = input.nextInt();
        for (int i=1; i<=n; i++) {
            if (i%3 == 0 && i%5 == 0) {
                System.out.println("FizzBuzz");
            } else if (i%3 == 0) {
                System.out.println("Fizz");
            } else if (i%5 == 0) {
                System.out.println("Buzz");
            } else {
                System.out.println(i);
            }
        }

    }
}
```
## C Implementation

### [Fizzbuzz.c](./C/fizzbuzz.c)

```c
/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 20/12/2018
**/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number upto which you want to find Fizzbuzz numbers ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0 && i % 3 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
```

## Python(3) Implementation

### [fizzbuzz.py](./Python3/fizzbuzz.py)

```c
'''
 * @author: Hrishi Patel <hrishipatel99@gmail.com>
 * @github: https://github.com/hrishi1999
 * @date: 20/12/2018
'''

n = int(input("Enter number of digits: "))

for i in range(1, n):
  if i%3==0 and i%5==0:
    print("fizzbuzz")
  elif i%3==0:
    print("fizz")
  elif i%5==0:
    print("buzz")
  else:
    print(i)
```

### [fizzbuzz2.py](./Python3/fizzbuzz2.py)

```python
'''
 * @author: ashwek
 * @date: 20/12/2018
'''

n = int(input("Enter limit : "))

for i in range(1, n+1):
    
    output = ""
    if i%3 == 0 :
        output = "Fizz"
    if i%5 == 0:
        output += "Buzz"

    if output :
        print(output)
    else:
        print(i)

```

### [profgrammer_fizzbuzz.py](./Python3/profgrammer_fizzbuzz.py)
```python
'''
  @author: profgrammer 
  @date: 30-12-2018
'''

n = int(input())

for i in range(1, n+1):
  if(i % 15 == 0):
    print("Fizz Buzz")
  elif(i % 5 == 0):
    print("Buzz")
  elif(i % 3 == 0):
    print("Fizz")
  else:
    print(i)
```

## C++ Implementation

### [FizzBuzz.cpp](./C++/FizzBuzz.cpp)

```c
'''
 * @author: Deepak Sharma
 * @github: https://github.com/dsdsharma
 * @date: 20/12/2018
'''
#include <iostream>

using namespace std;

int main()
{
   int n;
   cout << "====Fizz Buzz ====" << endl;
   cout << "Enter the number: ";
   cin >> n;
   for(int i=1; i<=n; i++){
       if(i%5==0 && i%3==0){
           cout << "FizzBuzz ";
       }else if(i%3==0){
           cout << "Fizz ";
       }else if(i%5==0){
           cout << "Buzz ";
       }else{
           cout << i << " ";
       }

   }

   return 0;
}
```

### [C# Solution](./C#/FizzBuzz.cs)

```cs
/**
 * @author imkaka
 * @date 20/12/2018
 */


using System;

public class FizzBuzz{

    public static void Main(string[] args){

        Console.WriteLine("/*====== Fizz Buzz ======*/");

        Console.WriteLine("Enter a Number : ");
        int input = Convert.ToInt32(Console.ReadLine());

        for(int i=1; i <= input; ++i){

            string res = "";

            if(i % 3 == 0) res += "Fizz";
            if(i % 5 == 0) res += "Buzz";

            if(res == "") res = i.ToString();

            Console.WriteLine(res);
        }
    }
}

```

## Go Implementation

### [FizzBuzz.go](./Go/FizzBuzz.go)

```go
/* 
  * @author: Ramanpreet Singh <ramanpreet6262@gmail.com> 
  * @github: https://github.com/Ramanpreet6262
  * @date: 20/12/2018
*/


package main

import "fmt"

func main() {
    fmt.Println("Enter a number upto which you want to find Fizzbuzz numbers: ")
    var n int
    _, err := fmt.Scanf("%d", &n)
    
    if err != nil {
            fmt.Println(err)
         }

    
    for i := 1; i <= n; i++ {
        if i % 3 == 0 && i % 5 == 0 {
            fmt.Println("FizzBuzz")
        } else if i % 5 == 0 {
            fmt.Println("Buzz")
        } else if i % 3 == 0 {
            fmt.Println("Fizz")
        } else {
            fmt.Println(i)
        }
    }
}
```
## Ruby Implementation 

### [Fizzbuzz.rb](./Ruby/fizzbuzz.rb)

```ruby
=begin
 @author: aaditkamat
 @date: 21/12/2018
=end

def get_result(num)
  result = ''
  if num % 3 != 0 and num % 5 != 0
    result += num.to_s
  end
  if num % 3 == 0
    result += 'Fizz'
  end
  if num % 5 == 0
    result += 'Buzz'
  end
  result
end

def solution(n)
  n.times do |num|
  p get_result(num + 1)
  end
end
```
## Python Implementation

## ShashankFizz.py (./python/ShashankFizz.py)
``` python
"""
        * @author: Shashankjain12
        * @date: 21/12/18
"""
print("Fizz Buzz")
n=int(input("Enter the number?"));
for i in range(1,n+1):
    if((i%3)==0 and (i%5)==0):
        print("Fizzbuzz ")
    elif((i%3)==0):
        print("fizz ")
    elif ((i%5)==0):
        print("buzz ")
    else:
        print(i)
```

## PHP Implementation

## fizzbuzz.php (./php/fizzbuzz.php)
```php

/*
 * @author willianwt
 * @date 16/01/2018
 */

$num = n; #any number will work
for ($i=1; $i <= $num; $i++) { 
  if ($i % 3 == 0 && $i % 5 == 0) {
    echo "FizzBuzz\n";
  } else if ($i % 3 == 0) {
   echo "Fizz\n";
  }else if ($i % 5 == 0) {
   echo "Buzz\n";
  }else{
    echo $i . "\n";
  }
}




```java


/* @date 22/09/2020
 * @author Shashwat Gupta 
 */
import java.util.Scanner;
public class DayOneShashwat {

	public static void main(String args[]) {
		int i,n;
		Scanner sc= new Scanner (System.in);
		System.out.println("Enter a number");
		n = sc. nextInt();
		for (i=1; i<=n; i++)
		{
			if(i%3==0 && i%5==0)
			{
				System.out.print("FizzBuzz," );
			}
			else if(i%5==0)
			{
				System.out.println("Buzz, ");
			}
			else if (i%3==0)
			{
				System.out.print("Fizz, ");
			}
			else
			{
				System.out.print(i+" , ");
		}
}
}
}
```

## Typescript Implementation

## FizzBuzz.ts (./Typescript/FizzBuzz.ts)
```typescript

/**
 * @author: dasabhishek0790
 * @date: 26 Sept 2020
 *
 * to run make sure you have node & typescript installed
 * run the following commands on prompt/terminal : 
 * tsc  FizzBuzz.ts
 * node FizzBuzz.js
 * delete the generated js file
 */

export class FizzBuzz {
  constructor() {}
  public solveFizzBuzzProblem(n: number): void {
      // loop from 1 till the number
    for (let i = 1; i <= n; i++) {
        // check if the current iterator value is divisible by both 3 or 5, print FizzBuzz
        // if only divisible by 3, print Fizz
        // if only divisible by 5, print Buzz
        // else print the iterator itself
      if (i % 3 === 0 && i % 5 === 0) console.log("FizzBuzz");
      else if (i % 3 === 0) console.log("Fizz");
      else if (i % 5 === 0) console.log("Buzz");
      else console.log(i);
    }
  }
}

// driver code
const obj = new FizzBuzz();
obj.solveFizzBuzzProblem(17);

```

## Java solution with Test
```
/* @date 02/10/2020
 * @author Prabhat Malhotra
 */

import org.junit.jupiter.api.Test;

/*
 * Solution
 */
public class FizzBuzzPrabhat {

  public void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
      if (i % 3 == 0 && i % 5 == 0) {
        System.out.print("FizzBuzz,");
      } else if (i % 3 == 0) {
        System.out.print("Fizz,");
      } else if (i % 5 == 0) {
        System.out.print("Buzz,");
      } else {
        System.out.print(i + ",");
      }
    }
  }
}

/*
 * Test
 */
class FizzBuzzPrabhatTest {
  @Test
  public void shouldPrintFizzBuzz() {
    FizzBuzzPrabhat fizzBuzzPrabhat = new FizzBuzzPrabhat();
    fizzBuzzPrabhat.fizzBuzz(20);
  }
}

```


### Have Another solution?

The beauty of programming lies in the fact that there is never a single solution to any problem.

In case you have an alternative way to solve this problem, do contribute to this repository (https://github.com/CodeToExpress/dailycodebase) :)
