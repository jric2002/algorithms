# Candies and Two Sisters
**Problem code**: 1335A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

There are two sisters Alice and Betty. You have n candies. You want to distribute these n candies between two sisters in such a way that:
* Alice will get `a (a > 0)` candies;
* Betty will get `b (b > 0)` candies;
* each sister will get some `integer` number of candies;
* Alice will get a greater amount of candies than Betty (i.e. `a > b`);
* all the candies will be given to one of two sisters (i.e. `a + b = n`).

Your task is to calculate the number of ways to distribute exactly `n` candies between sisters in a way described above. Candies are indistinguishable.

Formally, find the number of ways to represent n as the sum of `n = a + b`, where `a` and `b` are positive integers and `a > b`.

You have to answer `t` independent test cases.

## Input
The first line of the input contains one integer **t (1 ≤ t ≤ 10<sup>4</sup>)** — the number of test cases. Then `t` test cases follow.

The only line of a test case contains one integer **n (1 ≤ n ≤ 2*10<sup>9</sup>)** — the number of candies you have.

## Output
For each test case, print the answer — the number of ways to distribute exactly `n` candies between two sisters in a way described in the problem statement. If there is no way to satisfy all the conditions, print `0`.

## Examples
| input |
| :--- |
| 6 |
| 7 |
| 1 |
| 2 |
| 3 |
| 2000000000 |
| 763243547 |

| output |
| :--- |
| 3 |
| 0 |
| 0 |
| 1 |
| 999999999 |
| 381621773 |

## Note
For the test case of the example, the `3` possible ways to distribute candies are:
* a = 6, b = 1;
* a = 5, b = 2;
* a = 4, b = 3.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int t;
  unsigned long int n, r;
  cin >> t;
  for(unsigned int i = 0; i < t; i++) {
    cin >> n;
    if ((n % 2) == 0) {
      r = (n / 2) - 1;
    }
    else {
      r = ceil((float)n / 2.0) - 1;
    }
    cout << r << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
import math
t = int(input())
for i in range(0, t):
  n = int(input())
  r = 0
  if ((n % 2) == 0):
    r = int(n / 2) - 1
  else:
    r = math.ceil(n / 2) - 1
  print(r)
```