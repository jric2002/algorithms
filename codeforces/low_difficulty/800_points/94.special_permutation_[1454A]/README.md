# Special Permutation
**Problem code**: 1454A  
**Tags**: constructive algorithms, probabilities  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

You are given one integer `n (n > 1)`.

Recall that a permutation of length `n` is an array consisting of `n` distinct integers from `1` to `n` in arbitrary order. For example, `[2,3,1,5,4]` is a permutation of length `5`, but `[1,2,2]` is not a permutation (`2` appears twice in the array) and `[1,3,4]` is also not a permutation (`n = 3` but there is `4` in the array).

Your task is to find a permutation `p` of length `n` that there is no index `i (1 ≤ i ≤ n)` such that `pi = i` (so, for all `i` from `1` to `n` the condition `pi != i` should be satisfied).

You have to answer `t` independent test cases.

If there are several answers, you can print any. It can be proven that the answer exists for each `n > 1`.

## Input
The first line of the input contains one integer `t (1 ≤ t ≤ 100)` — the number of test cases. Then `t` test cases follow.

The only line of the test case contains one integer `n (2 ≤ n ≤ 100)` — the length of the permutation you have to find.

## Output
For each test case, print `n` distinct integers `p1, p2 , …, pn` — a permutation that there is no index `i (1 ≤ i ≤ n)` such that `pi = i` (so, for all `i` from `1` to `n` the condition `pi != i` should be satisfied).

If there are several answers, you can print any. It can be proven that the answer exists for each `n > 1`.

## Examples
| input |
| :--- |
| 2 |
| 2 |
| 5 |

| output |
| :--- |
| 2 1 |
| 2 1 5 3 4 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    cout << n << " ";
    for (unsigned short int i = 1; i < n; i++) {
      cout << i << " ";
    }
    cout << endl;
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
  print(n, end=" ")
  for i in range(1, n):
    print(i, end=" ")
  print(end="\n")
  t -= 1
```