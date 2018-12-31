![cover](./cover.png)

# Day 8 - Maximum Edit Distance (Levenshtein Distance)

Given two strings, and operations like replace, delete and add, write a program to determine how many minimum operations would it take to convert one string into another string.

**Hint: Use Lavenshtein Distance**

## Example (source: [Wikipedia](https://en.wikipedia.org/wiki/Levenshtein_distance))

For example, the (Minimum Edit) Levenshtein distance between `kitten` and 
`sitting` is `3`, since the following three edits change one 
into the other, and there is no way to do it with fewer than 
three edits:

1. **k**itten → **s**itten (substitution of "s" for "k")
2. sitt**e**n → sitt**i**n (substitution of "i" for "e")
3. sittin → sittin**g** (insertion of "g" at the end).

## Levenshtein distance

Levenshtein distance between two words is the minimum number of single-character edits (insertions, deletions or substitutions) required to change one word into the other. It is named after the Soviet mathematician Vladimir Levenshtein, who considered this distance in 1965.

### Definition

Mathematically, the Levenshtein distance between two strings `a` and `b` (of length `|a|` and `|b|` respectively) is given by ![lev](https://wikimedia.org/api/rest_v1/media/math/render/svg/4cf357d8f2135035207088d2c7b890fb4b64e410) where,

![def](https://wikimedia.org/api/rest_v1/media/math/render/svg/f0a48ecfc9852c042382fdc33c19e11a16948e85)

where 
![def](https://wikimedia.org/api/rest_v1/media/math/render/svg/52512ede08444b13838c570ba4a3fc71d54dbce9)
is the indicator function equal to `0` when
![def](https://wikimedia.org/api/rest_v1/media/math/render/svg/231fda9ee578f0328c5ca28088d01928bb0aaaec)
and equal to 1 otherwise, and
![def](https://wikimedia.org/api/rest_v1/media/math/render/svg/bdc0315678caad28648aafedb6ebafb16bd1655c)
is the distance between the first `i` characters of `a` and the first 
`j` characters of `b`.

Therefore, the minimum edit distance between `a` and `b` is the last element in the edit distance matrix

Read more at [Wikipedia](https://en.wikipedia.org/wiki/Levenshtein_distance)

![ques](./ques.png)

## JavaScript Implementation

### [Solution](./JavaScript/sol.js)

```js
/**
 * @author MadhavBahlMD
 * @date 31/12/2018
 */

function minEditDist (str1, str2) {
    // Initialize the distance matrix with all zeroes
    let len1 = str1.length,
        len2 = str2.length,
        distMatrix = [];

    for (let i=0; i<=len2; i++) {
        let row = [];
        for (let j=0; j<=len1; j++) {
            // Initialie the edit distance matrix by all zeroes
            row.push(0);
        }
        distMatrix.push(row);
    }

    // Fill the first row
    for (let i=0; i<=len1; i++) {
        distMatrix[0][i] = i;
    }

    // Fill the first column
    for (let j=0; j<=len2; j++) {
        distMatrix[j][0] = j;
    }

    // Fill the edit distance matrix
    for (let i=1; i<=len2; i++) {
        for (let j=1; j<=len1; j++) {
            if (str1[i-1] === str2[j-1]) {
                distMatrix[i][j] = distMatrix[i-1][j-1];
            } else {
                distMatrix [i][j] = 1 + Math.min (
                                            distMatrix[i-1][j-1],
                                            distMatrix[i-1][j],
                                            distMatrix[i][j-1]
                                          );
            }
        }
    }

    return distMatrix[len2][len1];
}

console.log(minEditDist ('abcdefgs', 'agced'));
console.log(minEditDist('kitten', 'sitting'));
```

## C++ Implementation

### [Solution] (./C++/levenshtein_distance.cpp)

```cpp
/**
 * @author: aaditkamat
 * @date: 31/12/2018
 */
 
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int ind(char m, char n) {
    return m == n ? 0 : 1;
}

int dist(string first, string second) {
    int firstLength = first.length(), secondLength = second.length();
    int m[firstLength + 1][secondLength + 1];
    for (int i = 1; i <= firstLength; i++) {
        m[i][0] = i;
    }
    for (int i = 0; i <= secondLength; i++) {
        m[0][i] = i;
    }
    for (int i = 1; i <= firstLength; i++) {
        for (int j = 1; j <= secondLength; j++) {
            int values[] = { m[i - 1][j] + 1, m[i][j - 1] + 1, m[i - 1][j - 1] + ind(first[i], second[j]) };
            m[i][j] = *min_element(begin(values), end(values));
        }
    }
    return m[firstLength][secondLength];
}
int main() {
    string first, second;
    cout << "Enter two strings: " << endl;
    getline(cin, first);
    getline(cin, second);
    cout << "The Levenshtein distance between \"" << first << "\" and \"" << second << "\" is: " << dist(first, second) << endl;
}
```

## Java Implementation

### [Solution] (./Java/LevenshteinDistance.java)

```java
/**
 * @author: aaditkamat
 * @date: 31/12/2018
 */

import java.util.Arrays;
import java.util.Scanner;

class LevenshteinDistance {
    public static int ind(char m, char n) {
        return m == n ? 0 : 1;
    }

    public static int dist(String first, String second) {
        int firstLength = first.length(), secondLength = second.length();
        int[][] m = new int[firstLength + 1][secondLength + 1];
        for (int i = 1; i <= firstLength; i++) {
            m[i][0] = i;
        }
        for (int i = 0; i <= secondLength; i++) {
            m[0][i] = i;
        }
        for (int i = 1; i <= firstLength; i++) {
            for (int j = 1; j <= secondLength; j++) {
                int[] values = { m[i - 1][j] + 1, m[i][j - 1] + 1, m[i - 1][j - 1] + ind(first.charAt(i - 1), second.charAt(j - 1)) };
                Arrays.sort(values);
                m[i][j] = values[0];
            }
        }
        return m[firstLength][secondLength];
    }
    public static void main(String[] args) {
        String first, second;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter two strings: ");
        first = input.next();
        second = input.next();
        System.out.printf("The Levenshtein distance between \"%s\" and \"%s\" is: %d\n", first, second, dist(first, second));
    }
}
```

## Python Implementation

### [Solution](./Python/levenshtein_distance.py)

```python
'''
@author: aaditkamat
@date: 31/12/2018
'''

def ind (m, n):
    return 0 if m == n else 1


def dist(first, second):
    first_length = len(first)
    second_length = len(second)

    m = []
    for i in range(first_length + 1):
        row = []
        for j in range(second_length + 1):
           row.append(0)
        m.append(row)

    for i in range(1, first_length + 1):
        m[i][0] = i;

    for i in range(second_length + 1):
        m[0][i] = i;

    for i in range(1, first_length + 1):
        for j in range(1, second_length + 1):
            values = [m[i - 1][j] + 1, m[i][j - 1] + 1, m[i - 1][j - 1] + ind(first[i - 1], second[j - 1])]
            values.sort()
            m[i][j] = values[0]


    return m[first_length][second_length]

def main():
    print('Enter two strings: ')
    first = input()
    second = input()
    print(f'The Levenshtein distance between \"{first}\" and \"{second}\" is: {dist(first, second)}')

main()
```

## Ruby Implementation

### [Solution](./Ruby/levenshtein_distance.rb)

```ruby
=begin
@author: aaditkamat
@date: 31/12/2018   
=end
def ind (m, n)
    m == n ? 0 : 1
end

def dist(first, second)
    first_length = first.length
    second_length = second.length

    m = Array.new(first_length + 1) { Array.new(second_length + 1) }
    (first.length + 1).times do |i|
        m[i][0] = i;
    end
    (second_length + 1).times do |i|
        m[0][i] = i;
    end
    (1..first_length).each do |i|
        (1..second_length).each do |j|
            values = [m[i - 1][j] + 1, m[i][j - 1] + 1, m[i - 1][j - 1] + ind(first[i - 1], second[j - 1])];
            values.sort!
            m[i][j] = values[0]
        end
    end
    m[first_length][second_length]
end

def main
    puts "Enter two strings: "
    first = gets.chomp!
    second = gets.chomp!
    puts "The Levenshtein distance between \"#{first}\" and \"#{second}\" is: #{dist(first, second)}"
end

main
```
