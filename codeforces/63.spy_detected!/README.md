# Spy Detected!
**Problem code**: 1512A  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

You are given an array `a` consisting of `n (n ≥ 3)` positive integers. It is known that in this array, all the numbers except one are the same (for example, in the array `[4,11,4,4]` all numbers except one are equal to `4`).

Print the index of the element that does not equal others. The numbers in the array are numbered from one.

## Input
The first line contains a single integer `t (1 ≤ t ≤ 100)`. Then t test cases follow.

The first line of each test case contains a single integer `n (3 ≤ n ≤ 100)` — the length of the array `a`.

The second line of each test case contains `n` integers `a1, a2, …, an (1 ≤ ai ≤ 100)`.

It is guaranteed that all the numbers except one in the `a` array are the same.

## Output
For each test case, output a single integer — the index of the element that is not equal to others.

## Examples
| input |
| :--- |
| 4 |
| 4 |
| 11 13 11 11 |
| 5 |
| 1 4 4 4 4 |
| 10 |
| 3 3 3 3 10 3 3 3 3 3 |
| 3 |
| 20 20 10 |

| output |
| :--- |
| 2 |
| 1 |
| 5 |
| 3 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, a, index, number, counter;
  cin >> t;
  while (t--) {
    cin >> n;
    index = 0;
    counter = 1;
    cin >> number;
    for (unsigned short int i = 2; i <= n; i++) {
      cin >> a;
      if (number != a && index < 1) {
        index = i;
      }
      if (number == a) {
        counter += 1;
      }
    }
    if (counter == 1) {
      index = index - counter;
    }
    cout << index << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  a = list(map(int, input().split(" ")))
  index = 0
  counter = 1
  number = a[0]
  for i in range(1, n):
    if ((number != a[i]) and (index < 1)):
      index = i + 1
    if (number == a[i]):
      counter += 1
  if (counter == 1):
    index = index - counter
  print(index)
  t -= 1
```