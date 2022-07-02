# Ordinary Numbers
**Problem code**: 1520B  
**Tags**: brute force, math, number theory  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Let's call a positive integer `n` ordinary if in the decimal notation all its digits are the same. For example, `1`, `2` and `99` are ordinary numbers, but `719` and `2021` are not ordinary numbers.

For a given number `n`, find the number of ordinary numbers among the numbers from `1` to `n`.

## Input
The first line contains one integer **t (1 ≤ t ≤ 10<sup>4</sup>)**. Then `t` test cases follow.

Each test case is characterized by one integer **n (1 ≤ n ≤ 10<sup>9</sup>)**.

## Output
For each test case output the number of ordinary numbers among numbers from `1` to `n`.

## Examples
| input |
| :--- |
| 6 |
| 1 |
| 2 |
| 3 |
| 4 |
| 5 |
| 100 |

| output |
| :--- |
| 1 |
| 2 |
| 3 |
| 4 |
| 5 |
| 18 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  unsigned int n, amount;
  long long int ordinary_number;
  cin >> t;
  while (t--) {
    cin >> n;
    amount = 0;
    for (unsigned short int i = 1; i < 10; i++) {
      ordinary_number = i;
      while (ordinary_number <= n) {
        amount += 1;
        ordinary_number = (10 * ordinary_number) + i;
      }
    }
    cout << amount << endl;
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
  amount = 0
  for i in range(1, 10):
    ordinary_number = i
    while (ordinary_number <= n):
      amount += 1
      ordinary_number = (10 * ordinary_number) + i
  print(amount)
  t -= 1
```