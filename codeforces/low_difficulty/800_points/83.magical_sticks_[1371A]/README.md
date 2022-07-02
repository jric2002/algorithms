# Magical Sticks
**Problem code**: 1371A  
**Tags**: math  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

A penguin Rocher has `n` sticks. He has exactly one stick with length `i` for all `1 ≤ i ≤ n`.

He can connect some sticks. If he connects two sticks that have lengths `a` and `b`, he gets one stick with length `a + b`. Two sticks, that were used in the operation disappear from his set and the new connected stick appears in his set and can be used for the next connections.

He wants to create the maximum number of sticks that have the same length. It is not necessary to make all sticks have the same length, some sticks can have the other length. How many sticks with the equal length he can create?

## Input
The input consists of multiple test cases. The first line contains a single integer `t (1 ≤ t ≤ 1000)` — the number of test cases. Next `t` lines contain descriptions of test cases.

For each test case, the only line contains a single integer **n (1 ≤ n ≤ 10<sup>9</sup>)**.

## Output
For each test case, print a single integer  — the answer to the problem.

## Examples
| input |
| :--- |
| 4 |
| 1 |
| 2 |
| 3 |
| 4 |

| output |
| :--- |
| 1 |
| 1 |
| 2 |
| 2 |

## Note
In the third case, he can connect two sticks with lengths `1` and `2` and he will get one stick with length `3`. So, he will have two sticks with lengths `3`.

In the fourth case, he can connect two sticks with lengths `1` and `3` and he will get one stick with length `4`. After that, he will have three sticks with lengths `{2, 4, 4}`, so two sticks have the same length, and one stick has the other length.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  unsigned int n, max_num_sticks;
  cin >> t;
  while (t--) {
    cin >> n;
    if ((n % 2) == 0) {
      max_num_sticks = n / 2;
    }
    else {
      max_num_sticks = (n + 1) / 2;
    }
    cout << max_num_sticks << endl;
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
  max_num_sticks = 0
  if ((n % 2) == 0):
    max_num_sticks = int(n / 2)
  else:
    max_num_sticks = int((n + 1) / 2)
  print(max_num_sticks)
  t -=1
```