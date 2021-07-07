![cover](./cover.png)

# Day 14 - Recursion Series Part B

Today's Problems - Sum of digits and product of numbers

## Question 1

Given a number, write a program to find the sum of it's digits using recursion

**Example**

```
input: 12345
output: 15

input: 91827
output: 27
```

## Question 2

Given 2 numbers, write a program to find their product using recursion

**Example**

```
input: 10,5
output: 50

input: -8,4
output: -32
```

**Hint**: Multiplication is repeated addition!

![ques](./ques.png)

## Part A - Sum of Digits

### JavaScript Implementation

#### [Solution](./JavaScript/sum_madhav.js)

```js
/**
 * @author MadhavBahl
 * @date 08/01/2018
 */

function sumDigits (num) {
    if (num/10 < 1)
        return num;
    else
        return (num % 10) + sumDigits (parseInt(num/10));
}

let num1 = 12345, num2 = 91827;
console.log(`Sum of digits of ${num1} is ${sumDigits(num1)}`);
console.log(`Sum of digits of ${num2} is ${sumDigits(num2)}`);
```

### Java Implementation

#### [Solution](./Java/SumDigits.java)

```java
/**
 * @author MadhavBahl
 * @date 08/01//2018
 */

import java.util.Scanner;

public class SumDigits {
    public static int sum (int num) {
        if (num/10 < 1)
            return num;
        else
            return (num%10) + sum(num/10);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Sum of digits using recursion ===== */");
        System.out.print("\nEnter a number: ");
        int num = input.nextInt();
        System.out.println("Sum of digits of " + num + " is: " + sum(num));
    }
}
```

### Python Implementation

#### [Solution by  @vishalshirke7](./Python/sumdigits.py)
```python

"""
  @author : vishalshirke7
  @date : 08/01/2019
"""


def sum_of_digits(n):
    if n <= 0:
        return n
    else:
        return (n % 10) + sum_of_digits(n // 10)


print(sum_of_digits(int(input())))


#### [Solution](./Java/Sumrec.java)
```
/**
 * @date 08/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class Sumrec {
    public static int sum(int n)
    {
        if(n==0)
            return 0;
        else
            return n%10+sum(n/10);
    }
   public static void main(String []args)
   {
       int n,s;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter a number");
       n=sc.nextInt();
       s=sum(n);
       System.out.println(s);
   }   
}
```

### C++ Implementation

#### [C++ Solution by @profgrammer](./C++/profgrammer_sumdigits.cpp)
```cpp
/*
  *@author: profgrammer
  *@date: 08-01-2019
*/

#include <bits/stdc++.h>
using namespace std;

int sum_digits(int n){
  if(n < 10) return n;
  return n%10 + sum_digits(n/10);
}

int main() {
  int n;
  cin>>n;
  cout<<num_digits(n)<<endl;
}
```

#### [C++ Solution by @divyakhetan](./C++/sumOfDigitsDay14.cpp)
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

### Ruby Implementation

#### [Solution](./Ruby/sum_of_digits.rb)

```ruby
=begin
@author: aaditkamat
@date: 08/01/2019
=end

def sum_of_digits(num, sum)
  if num < 0
    return -1 * sum_of_digits(abs(num), sum)
  end
  if num === 0
    return sum
  end
  sum_of_digits(num / 10, sum + num % 10)
end

def main
  print "Enter a number: "
  num = gets.chomp.to_i
  puts "Sum of digits of #{num} is: #{sum_of_digits(num, 0)}"
end

main
```

### C Implementation

#### [Solution](./C/sum_of_digits.c)

```c
/*
 * @author: ashwek
 * @date: 8/1/2019
 */

#include <stdio.h>

int sum(int num) {
    if( num <= 0 ){
        return 0;
    }
    return (num%10) + sum(num/10);
}

void main(){

    int num;

    printf("Enter a number = ");
    scanf("%d", &num);

    printf("Sum of digits = %d\n", sum(num));
}
```

<hr />

## Part B - Product of numbers

### JavaScript Implementation

#### [Solution](./JavaScript/prod_madhav.js)

```js
/**
 * @author MadhavBahl
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
```

### Java Implementation

#### [Solution](./Java/Product.java)

```java
/**
 * @author MadhavBahl
 * @date 08/01//2018
 */
 
import java.util.Scanner;

public class Product {
    public static int recursiveProd (int num1, int num2) {
        if (num2 == 1)
            return num1;

        // If any of the numbers is zero, return 0
        if (num1 == 0 || num2 == 0)
            return 0;

        // If both numbers are less than zero negative signs can be removed
        if (num1 < 0 && num2 < 0)
            return recursiveProd (-1*num1, -1*num2);
        else if (num2 < 0)
            return recursiveProd (num2, num1);
        else
            return num1 + recursiveProd(num1, num2-1);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Product of numbers using recursion ===== */");

        // Take input
        System.out.print("\nEnter first number: ");
        int num1 = input.nextInt();
        System.out.print("Enter second number: ");
        int num2 = input.nextInt();

        // Print the result
        System.out.println("Product of numbers " + num1 + " and " + num2 + " is: " + recursiveProd(num1, num2));
    }
}
```

#### [Solution](./Java/Recmultiply.java)

```java
/**
 * @date 08/01/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class Recmultiply {
   public static int product(int m,int n)
   {
       if (n==0)
           return 0;
       else
           return m+product(m,n-1);
   }
    public static void main(String []args)
    {
        int m,n,p;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter two numbers ");
        m=sc.nextInt();
        n=sc.nextInt();
        p=product(Math.abs(m),Math.abs(n));
       if((m<0&&n>0)||(m>0&&n<0))
           p=p*-1;
        System.out.println(p);
    }      
}
```

### C++ Implementation

#### [C++ Solution by @profgrammer](./C++/profgrammer_product.cpp)
```cpp
/*
  *@author: profgrammer
  *@date: 08-01-2019
*/

#include <bits/stdc++.h>
using namespace std;

int mul(int a, int b){
  if(b == 0) return 0;
  // a*b = (a*b/2) + (a*b/2) + (b%2 == 0)? 0:a;
  int ans = mul(a, b/2);
  ans = ans + ans;
  if(b % 2 == 1) ans += a;
  return ans;
}

int main() {
  int a,b;
  cin>>a>>b;
  cout<<mul(a,b)<<endl;
}
```

#### [C++ Solution by @divyakhetan](./C++/productDay14.cpp)
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
### C++ Implementation [./C++/day14SumAndProduct.cpp]
```cpp
/*
author:YashMeh
date  :29/1/19
*/
#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
    return n;
    int smallCalc=sum(n/10);
    return smallCalc+n%10;
}
int product(int m,int n)
{
    if(m==0)
    return 0;
    int smallCalc=product(m-1,n);
    return smallCalc+n;
}
main()
{
    cout<<sum(123456)<<endl;
    cout<<product(8,4)<<endl;
}
```
### Ruby Implementation

#### [Solution](./Ruby/product_of_two_numbers.rb)

```ruby
=begin
@author: aaditkamat
@date: 08/01/2019
=end

def product_of_two_numbers(first, second, product)
  if first < 0 and second < 0
    return product_of_two_numbers(-first, -second, product)
  end
  if first == 0 or second == 0
    return product
  end
  if first < 0 or second < 0
    new_first = [first, second].min
    new_second = [first, second].max
    return product_of_two_numbers(new_first, new_second - 1, product + new_first)
  end
  product_of_two_numbers(first, second - 1, product + first)
end

def main
  puts "Enter two numbers: "
  first = gets.chomp.to_i
  second = gets.chomp.to_i
  puts "#{first} * #{second} = #{product_of_two_numbers(first, second, 0)}"
end

main
```

### C Implementation

#### [Solution](./C/product_of_2_numbers.c)

```c
/*
 * @author: ashwek
 * @date: 8/1/2019
 */

#include <stdio.h>

int product(int a, int b){

    if( a == 0 || b == 0 )
        return 0;
    else if( a == 1 )
        return b;
    else if( b == 1 )
        return a;

    if( a < 0 && b < 0 )
        return product(-a, -b);
    else if( a < 0 )
        return product(b, a);
    else
        return b + product(a-1, b);

}

void main(){

    int a, b;

    printf("Enter 1st number = ");
    scanf("%d", &a);
    printf("Enter 2nd number = ");
    scanf("%d", &b);

    printf("%d x %d = %d\n", a, b, product(a, b));

}
```

