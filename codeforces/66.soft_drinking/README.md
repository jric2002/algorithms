# Soft Drinking
**Problem code**: 151A  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

This winter is so cold in Nvodsk! A group of `n` friends decided to buy `k` bottles of a soft drink called "Take-It-Light" to warm up a bit. Each bottle has `l` milliliters of the drink. Also they bought `c` limes and cut each of them into `d` slices. After that they found `p` grams of salt.

To make a toast, each friend needs `nl` milliliters of the drink, a slice of lime and `np` grams of salt. The friends want to make as many toasts as they can, provided they all drink the same amount. How many toasts can each friend make?

## Input
The first and only line contains **positive** integers `n`, `k`, `l`, `c`, `d`, `p`, `nl`, `np`, not exceeding 1000 and no less than 1. The numbers are separated by exactly one space.

## Output
Print a single integer — the number of toasts each friend can make.

## Examples
| input |
| :--- |
| 3 4 5 10 8 100 3 1 |

| output |
| :--- |
| 2 |

| input |
| :--- |
| 5 100 10 1 19 90 4 3 |

| output |
| :--- |
| 3 |

| input |
| :--- |
| 10 1000 1000 25 23 1 50 1 |

| output |
| :--- |
| 0 |

## Note
A comment to the first sample:

Overall the friends have `4 * 5 = 20` milliliters of the drink, it is enough to make `20 / 3 = 6` toasts. The limes are enough for `10 * 8 = 80` toasts and the salt is enough for `100 / 1 = 100` toasts. However, there are 3 friends in the group, so the answer is `min(6, 80, 100) / 3 = 2`.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo */
using namespace std;
int main() {
  unsigned short int n, k, l, c, d, p, nl, np;
  vector<unsigned short int> r;
  unsigned short int number_toasts;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  r.push_back((k * l) / nl);
  r.push_back(c * d);
  r.push_back(p / np);
  vector<unsigned short int>::iterator aux = min_element(r.begin(), r.end());
  number_toasts = *aux / n;
  cout << number_toasts << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n, k, l, c, d, p, nl, np = list(map(int, input().split(" ")))
r = [((k * l) / nl), c * d, p / np]
number_toasts = int(min(r) / n)
print(number_toasts)
```