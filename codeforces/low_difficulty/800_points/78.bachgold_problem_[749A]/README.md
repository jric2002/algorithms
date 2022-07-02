# Bachgold Problem
**Problem code**: 749A  
**Tags**: greedy, implementation, math, number theory  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Bachgold problem is very easy to formulate. Given a positive integer `n` represent it as a sum of `maximum possible` number of prime numbers. One can prove that such representation exists for any integer greater than `1`.

Recall that integer `k` is called prime if it is greater than `1` and has exactly two positive integer divisors — `1` and `k`.

## Input
The only line of the input contains a single integer `n (2 ≤ n ≤ 100 000)`.

## Output
The first line of the output contains a single integer `k` — maximum possible number of primes in representation.

The second line should contain `k` primes with their sum equal to `n`. You can print them in any order. If there are several optimal solution, print any of them.

## Examples
| input |
| :--- |
| 5 |

| output |
| :--- |
| 2 |
| 2 3 |

| input |
| :--- |
| 6 |

| output |
| :--- |
| 3 |
| 2 2 2 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int n, amount_two;
  cin >> n;
  if ((n % 2) == 0) {
    amount_two = n / 2;
    cout << amount_two << endl;
    for (unsigned int i = 0; i < amount_two; i++) {
      cout << 2 << " ";
    }
    cout << endl;
  }
  else {
    amount_two = (n - 3) / 2;
    cout << (amount_two + 1) << endl;
    for (unsigned int i = 0; i < amount_two; i++) {
      cout << 2 << " ";
    }
    cout << 3 << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
if ((n % 2) == 0):
  amount_two = int(n / 2)
  print(amount_two)
  for i in range(0, amount_two):
    print(2, end=" ")
  print(end="\n")
else:
  amount_two = int((n - 3) / 2)
  print(amount_two + 1)
  for i in range(0, amount_two):
    print(2, end=" ")
  print(3, end="\n")
```