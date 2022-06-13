# Gifts Fixing
**Problem code**: 1399B  
**Tags**: greedy  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

You have `n` gifts and you want to give all of them to children. Of course, you don't want to offend anyone, so all gifts should be equal between each other. The `i-th` gift consists of `ai` candies and `bi` oranges.

During one move, you can choose some gift `1 ≤ i ≤ n` and do one of the following operations:

* eat exactly `one candy` from this gift (decrease `ai` by one);
* eat exactly `one orange` from this gift (decrease `bi` by one);
* eat exactly `one candy` and exactly `one orange` from this gift (decrease both `ai` and `bi` by one).

Of course, you can not eat a candy or orange if it's not present in the gift (so neither `ai` nor `bi` can become less than zero).

As said above, all gifts should be equal. This means that after some sequence of moves the following two conditions should be satisfied: `a1 = a2 = ⋯ = an` and `b1 = b2 = ⋯ = bn` (and `ai` equals `bi` is `not necessary`).

Your task is to find the `minimum` number of moves required to equalize all the given gifts.

You have to answer `t` independent test cases.

## Input
The first line of the input contains one integer `t (1 ≤ t ≤ 1000)` — the number of test cases. Then `t` test cases follow.

The first line of the test case contains one integer `n (1 ≤ n ≤ 50)` — the number of gifts. The second line of the test case contains `n` integers **a1, a2, …, an (1 ≤ ai ≤ 10<sup>9</sup>)**, where `ai` is the number of candies in the `i-th` gift. The third line of the test case contains `n` integers **b1, b2, …, bn (1 ≤ bi ≤ 10<sup>9</sup>)**, where `bi` is the number of oranges in the `i-th` gift.

## Output
For each test case, print one integer: the `minimum` number of moves required to equalize all the given gifts.

## Examples
| input |
| :--- |
| 5 |
| 3 |
| 3 5 6 |
| 3 2 3 |
| 5 |
| 1 2 3 4 5 |
| 5 4 3 2 1 |
| 3 |
| 1 1 1 |
| 2 2 2 |
| 6 |
| 1 1000000000 1000000000 1000000000 1000000000 1000000000 |
| 1 1 1 1 1 1 |
| 3 |
| 10 12 8 |
| 7 5 4 |

| output |
| :--- |
| 6 |
| 16 |
| 0 |
| 4999999995 |
| 7 |

## Note
In the first test case of the example, we can perform the following sequence of moves:

* choose the first gift and eat one orange from it, so `a = [3,5,6]` and `b = [2,2,3]`;
* choose the second gift and eat one candy from it, so `a = [3,4,6]` and `b = [2,2,3]`;
* choose the second gift and eat one candy from it, so `a = [3,3,6]` and `b = [2,2,3]`;
* choose the third gift and eat one candy and one orange from it, so `a = [3,3,5]` and `b = [2,2,2]`;
* choose the third gift and eat one candy from it, so `a = [3,3,4]` and `b = [2,2,2]`;
* choose the third gift and eat one candy from it, so `a = [3,3,3]` and `b = [2,2,2]`.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <algorithm>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n;
  vector<long int> a;
  vector<long int> b;
  long int ai, bi, min_a, min_b;
  long long int min_mov;
  cin >> t;
  while (t--) {
    cin >> n;
    min_mov = 0;
    for (unsigned short int i = 0; i < n; i++) {
      cin >> ai;
      a.push_back(ai);
      if (i > 0) {
        if (min_a > ai) {
          min_a = ai;
        }
      }
      else {
        min_a = ai;
      }
    }
    for (unsigned short int i = 0; i < n; i++) {
      cin >> bi;
      b.push_back(bi);
      if (i > 0) {
        if (min_b > bi) {
          min_b = bi;
        }
      }
      else {
        min_b = bi;
      }
    }
    for (unsigned short int i = 0; i < n; i++) {
      min_mov += max((a.at(i) - min_a), (b.at(i) - min_b));
    }
    cout << min_mov << endl;
    a.clear();
    b.clear();
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
  a = list(map(int, input().split(" ")))
  b = list(map(int, input().split(" ")))
  min_a = min(a)
  min_b = min(b)
  for i in range(0, n):
    min_mov += max((a[i] - min_a), (b[i] - min_b))
  print(min_mov)
  t -= 1
```