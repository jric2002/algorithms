# Yet Another Two Integers Problem
**Problem code**: 1409A  
**Tags**: greedy, math  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

You are given two integers `a` and `b`.

In one move, you can choose some `integer` `k` from `1` to `10` and add it to `a` or subtract it from `a`. In other words, you choose an integer `k ∈ [1;10]` and perform `a := a + k` or `a := a − k`. You may use `different` values of `k` in different moves.

Your task is to find the `minimum` number of moves required to obtain `b` from `a`.

You have to answer `t` independent test cases.

## Input
The first line of the input contains one integer **t (1 ≤ t ≤ 2*10<sup>4</sup>)** — the number of test cases. Then `t` test cases follow.

The only line of the test case contains two integers **a** and **b (1 ≤ a, b ≤ 10<sup>9</sup>)**.

## Output
For each test case, print the answer: the minimum number of moves required to obtain `b` from `a`.

## Examples
| input |
| :--- |
| 6 |
| 5 5 |
| 13 42 |
| 18 4 |
| 1337 420 |
| 123456789 1000000000 |
| 100500 9000 |

| output |
| :--- |
| 0 |
| 3 |
| 2 |
| 92 |
| 87654322 |
| 9150 |

## Note
In the first test case of the example, you don't need to do anything.

In the second test case of the example, the following sequence of moves can be applied: `13 → 23 → 32 → 42` (add `10`, add `9`, add `10`).

In the third test case of the example, the following sequence of moves can be applied: `18 → 10 → 4` (subtract `8`, subtract `6`).

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  int a, b, min_mov;
  unsigned short int k = 10; // k = [1;10]
  cin >> t;
  for (unsigned short int i = 0; i < t; i++) {
    min_mov = 0;
    cin >> a >> b;
    a = abs(a - b);
    while (a != 0) {
      if (a <= 10) {
        a = 0;
        min_mov++;
      }
      else {
        min_mov += (a / k);
        a = a % k;
      }
    }
    cout << min_mov << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
t = int(input())
k = 10 # k = [1;10]
for i in range(0, t):
  a, b = [int(number) for number in input().split(" ")]
  a = abs(a - b)
  min_mov = 0
  while (a != 0):
    if (a <= 10):
      a = 0
      min_mov += 1
    else:
      min_mov = int(a / k)
      a = a % k
  print(min_mov)
```