# Restoring Three Numbers
**Problem code**: 1154A  
**Tags**: math  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Polycarp has guessed three positive integers `a`, `b` and `c`. He keeps these numbers in secret, but he writes down four numbers on a board in arbitrary order — their pairwise sums (three numbers) and sum of all three numbers (one number). So, there are four numbers on a board in random order: `a + b`, `a + c`, `b + c` and `a + b + c`.

You have to guess three numbers `a`, `b` and `c` using given numbers. Print three guessed integers in any order.

Pay attention that some given numbers `a`, `b` and `c` can be equal (it is also possible that `a = b = c`).

## Input
The only line of the input contains four positive integers **x1, x2, x3, x4 (2 ≤ xi ≤ 10<sup>9</sup>)** — numbers written on a board in random order. It is guaranteed that the answer exists for the given number `x1, x2, x3, x4`.

## Output
Print such positive integers `a`, `b` and `c` that four numbers written on a board are values `a + b`, `a + c`, `b + c` and `a + b + c` written in some order. Print `a`, `b` and `c` in any order. If there are several answers, you can print any. It is guaranteed that the answer exists.

## Examples
| input |
| :--- |
| 3 6 5 4 |

| output |
| :--- |
| 2 1 3 |

| input |
| :--- |
| 40 40 40 60 |

| output |
| :--- |
| 20 20 20 |

| input |
| :--- |
| 201 101 101 200 |

| output |
| :--- |
| 1 100 100 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <algorithm>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int a, b, c;
  int x1, x2, x3, x4;
  vector<int> values;
  cin >> x1 >> x2 >> x3 >> x4;
  values.push_back(x1);
  values.push_back(x2);
  values.push_back(x3);
  values.push_back(x4);
  sort(values.begin(), values.end());
  a = values.at(3) - values.at(2);
  b = values.at(0) + values.at(2) - values.at(3);
  c = values.at(1) + values.at(2) - values.at(3);
  cout << a << " " << b << " " << c << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
values = list(map(int, input().split(" ")))
values.sort()
a = values[3] - values[2]
b = values[0] + values[2] - values[3]
c = values[1] + values[2] - values[3]
print(a, b, c, sep=" ")
```