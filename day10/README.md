![cover](./cover.png)

# Day 10 -- Smallest Substring Problem

**Question** Find all the permutations of the given string

```
Example:
input: 
123

output:
123
132
213
231
312
321
```

![ques](./ques.png)

## JavaScript Implementation

### [Solution](./sol.js)

```js
// To Be Added
```



## C++ Implementation

### [Solution](./C++/permutationday10.cpp)

```cpp
/**
 * @author:divyakhetan
 * @date: 2/1/2019
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  do{
    cout << s << endl;
  }while(next_permutation(s.begin(), s.end()));
}
```
