# Dislike of Threes
**Problem code**: 1560A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Polycarp doesn't like integers that are divisible by 3 or end with the digit 3 in their decimal representation. Integers that meet both conditions are disliked by Polycarp, too.

Polycarp starts to write out the positive (greater than 0) integers which he likes: 1,2,4,5,7,8,10,11,14,16,…. Output the `k-th` element of this sequence (the elements are numbered from 1).

## Input
The first line contains one integer `t (1 ≤ t ≤ 100)` — the number of test cases. Then `t` test cases follow.

Each test case consists of one line containing one integer `k (1 ≤ k ≤ 1000)`.

## Output
For each test case, output in a separate line one integer `x` — the `k-th` element of the sequence that was written out by Polycarp.

## Examples
| input |
| :--- |
| 10 |
| 1 |
| 2 |
| 3 |
| 4 |
| 5 |
| 6 |
| 7 |
| 8 |
| 9 |
| 1000 |

| output |
| :--- |
| 1 |
| 2 |
| 4 |
| 5 |
| 7 |
| 8 |
| 10 |
| 11 |
| 14 |
| 1666 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, k, i, x;
  cin >> t;
  while (t--) {
    cin >> k;
    i = 1;
    x = 0;
    while (i <= k) {
      x++;
      if ((x % 3) != 0) {
        if ((x % 10) != 3) {
          i++;
        }
      }
    }
    cout << x << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  k = int(input())
  i = 1
  x = 0
  while (i <= k):
    x += 1
    if ((x % 3) != 0):
      if ((x % 10) != 3):
        i += 1
  print(x)
  t -= 1
```