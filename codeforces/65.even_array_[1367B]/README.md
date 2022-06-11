# Even Array
**Problem code**: 1367B  
**Tags**: greedy, math  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

You are given an array `a[0… n−1]` of length `n` which consists of non-negative integers. **Note that array indices start from zero.**

An array is called good if the parity of each index matches the parity of the element at that index. More formally, an array is good if for all `i (0 ≤ i ≤ n−1)` the equality `i mod 2 = a[i] mod 2` holds, where `x mod 2` is the remainder of dividing `x` by `2`.

For example, the arrays `[0, 5, 2, 1]` and `[0, 17, 0, 3]` are good, and the array `[2, 4, 6, 7]` is bad, because for `i = 1`, the parities of `i` and `a[i]` are different: `i mod 2 = 1 mod 2 = 1`, but `a[i] mod 2 = 4 mod 2 = 0`.

In one move, you can take **any** two elements of the array and swap them (these elements are not necessarily adjacent).

Find the minimum number of moves in which you can make the array a good, or say that this is not possible.

## Input
The first line contains a single integer `t (1 ≤ t ≤ 1000)` — the number of test cases in the test. Then `t` test cases follow.

Each test case starts with a line containing an integer `n (1 ≤ n ≤ 40)` — the length of the array `a`.

The next line contains `n` integers `a0, a1 , …, an−1 (0 ≤ ai ≤ 1000)` — the initial array.

## Output
For each test case, output a single integer — the minimum number of moves to make the given array `a` good, or `-1` if this is not possible.

## Examples
| input |
| :--- |
| 4 |
| 4 |
| 3 2 7 6 |
| 3 |
| 3 2 6 |
| 1 |
| 7 |
| 7 |
| 4 9 2 1 18 3 0 |

| output |
| :--- |
| 2 |
| 1 |
| -1 |
| 0 |

## Note
In the first test case, in the first move, you can swap the elements with indices `0` and `1`, and in the second move, you can swap the elements with indices `2` and `3`.

In the second test case, in the first move, you need to swap the elements with indices `0` and `1`.

In the third test case, you cannot make the array good.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, a, amount_one, amount_zero;
  signed short int min_mov;
  cin >> t;
  while (t--) {
    min_mov = 0;
    amount_zero = 0;
    amount_one = 0;
    cin >> n;
    for (unsigned short int i = 0; i < n; i++) {
      cin >> a;
      if ((a % 2) != (i % 2)) {
        ((a % 2) == 0) ? amount_zero++ : amount_one++;
      }
    }
    (amount_zero != amount_one) ? min_mov = -1 : min_mov = amount_one;
    cout << min_mov << endl;
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
  min_mov = 0
  amount_zero = 0
  amount_one = 0
  #a = [int(e) for e in input().split(" ")]
  a = list(map(int, input().split(" ")))
  for i in range(0, n):
    if ((a[i] % 2) != (i % 2)):
      if ((a[i] % 2) == 0):
        amount_zero += 1
      else:
        amount_one += 1
  if (amount_zero != amount_one):
    min_mov = -1
  else:
    min_mov = amount_one
  print(min_mov)
  t -=1
```