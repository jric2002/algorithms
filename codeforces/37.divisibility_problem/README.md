# Divisibility Problem
**Problem code**: 1328A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

You are given two positive integers `a` and `b`. In one move you can increase `a` by `1` (replace `a` with `a+1`). Your task is to find the minimum number of moves you need to do in order to make `a` divisible by `b`. It is possible, that you have to make `0` moves, as `a` is already divisible by `b`. You have to answer `t` independent test cases.

## Input
The first line of the input contains one integer **t (1 ≤ t ≤ 10<sup>4</sup>)** — the number of test cases. Then `t` test cases follow.

The only line of the test case contains two integers `a` and **b (1 ≤ a,b ≤ 10<sup>9</sup>)**.

## Output
For each test case print the answer — the minimum number of moves you need to do in order to make `a` divisible by `b`.

## Examples
| input |
| :--- |
| 5 |
| 10 4 |
| 13 9 |
| 100 13 |
| 123 456 |
| 92 46 |

| output |
| :--- |
| 2 |
| 5 |
| 4 |
| 333 |
| 0 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int t;
  unsigned long int a, b;
  unsigned int movements;
  cin >> t;
  unsigned long int min_movements[t];
  for (int i = 0; i < t; i++) {
    cin >> a;
    cin >> b;
    movements = 0;
    if ((a % b) != 0) {
      movements = b - (a % b);
    }
    min_movements[i] = movements;
  }
  for (int i = 0; i < t; i++) {
    cout << min_movements[i] << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
min_movements = []
for i in range(0, n):
  a, b = [int(number) for number in input().split(" ")]
  movements = 0
  if ((a % b) != 0):
    movements = b - (a % b)
  min_movements.append(movements)
for i in range(0, n):
  print(min_movements[i])
```