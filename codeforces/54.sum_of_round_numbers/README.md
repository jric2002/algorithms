# Sum of Round Numbers
**Problem code**: 1352A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

A positive (strictly greater than zero) integer is called round if it is of the form `d00...0`. In other words, a positive integer is round if all its digits except the leftmost (most significant) are equal to zero. In particular, all numbers from `1` to `9` (inclusive) are round.

For example, the following numbers are round: `4000`, `1`, `9`, `800`, `90`. The following numbers are `not` round: `110`, `707`, `222`, `1001`.

You are given a positive integer **n (1 ≤ n ≤ 10<sup>4</sup>)**. Represent the number n as a sum of round numbers using the minimum number of summands (addends). In other words, you need to represent the given number `n` as a sum of the least number of terms, each of which is a round number.

## Input
The first line contains an integer **t (1 ≤ t ≤ 10<sup>4</sup>)** — the number of test cases in the input. Then `t` test cases follow.

Each test case is a line containing an integer **n (1 ≤ n ≤ 10<sup>4</sup>)**.

## Output
Print `t` answers to the test cases. Each answer must begin with an integer `k` — the minimum number of summands. Next, `k` terms must follow, each of which is a round number, and their sum is `n`. The terms can be printed in any order. If there are several answers, print any of them.

## Examples
| input |
| :--- |
| 5 |
| 5009 |
| 7 |
| 9876 |
| 10000 |
| 10 |

| output |
| :--- |
| 2 |
| 5000 9 |
| 1 |
| 7 |
| 4 |
| 800 70 6 9000 |
| 1 |
| 10000 |
| 1 |
| 10 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, d, o;
  signed short int k;
  string number, character;
  vector<unsigned short int> c;
  cin >> t;
  for (unsigned short int i = 0; i < t; i++) {
    cin >> n;
    number = to_string(n);
    k = (number.size() - 1);
    for (unsigned short int j = 0; j < number.size() && k >= 0; j++) {
      character = number.at(k);
      d = stoi(character);
      o = d * pow(10, j);
      if (o != 0) {
        c.push_back(o);
      }
      k--;
    }
    cout << c.size() << endl;
    for (vector<unsigned short int>::iterator it = c.begin(); it != c.end(); it++) {
      cout << *it << " ";
    }
    cout << endl;
    c.clear();
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
t = int(input())
for i in range(0, t):
  n = str(input())
  c = []
  k = len(n) - 1
  j = 0
  while ((j < len(n)) and (k >= 0)):
    d = int(n[k])
    o = d * pow(10, j)
    if (o != 0):
      c.append(o)
    k -= 1
    j += 1
  print(len(c))
  print(" ".join(list(map(str, c))))
```