# Restore the Permutation by Merger
**Problem code**: 1385B  
**Tags**: greedy  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

A permutation of length `n` is a sequence of integers from `1` to `n` of length `n` containing each number exactly once. For example, `[1]`, `[4,3,5,1,2]`, `[3,2,1]` are permutations, and `[1,1]`, `[0,1]`, `[2,2,1,4]` are not.

There was a permutation `p[1…n]`. It was merged with itself. In other words, let's take two instances of `p` and insert elements of the second `p` into the first maintaining relative order of elements. The result is a sequence of the length `2n`.

For example, if `p = [3,1,2]` some possible results are: `[3,1,2,3,1,2]`, `[3,3,1,1,2,2]`, `[3,1,3,1,2,2]`. The following sequences are not possible results of a merging: `[1,3,2,1,2,3]`, `[3,1,2,3,2,1]`, `[3,3,1,2,2,1]`.

For example, if `p = [2,1]` the possible results are: `[2,2,1,1]`, `[2,1,2,1]`. The following sequences are not possible results of a merging: `[1,1,2,2]`, `[2,1,1,2]`, `[1,2,2,1]`.

Your task is to restore the permutation `p` by the given resulting sequence `a`. It is guaranteed that the answer `exists and is unique`.

You have to answer `t` independent test cases.

## Input
The first line of the input contains one integer `t (1 ≤ t ≤ 400)` — the number of test cases. Then `t` test cases follow.

The first line of the test case contains one integer `n (1 ≤ n ≤ 50)` — the length of permutation. The second line of the test case contains `2n` integers **a1, a2, …, a<sub>2n</sub> (1 ≤ ai ≤ n)**, where `ai` is the `i-th` element of `a`. It is guaranteed that the array `a` represents the result of merging of some permutation `p` with the same permutation `p`.

## Output
For each test case, print the answer: `n` integers `p1 , p2, …, pn (1 ≤ pi ≤ n)`, representing the initial permutation. It is guaranteed that the answer `exists and is unique`.

## Examples
| input |
| :--- |
| 5 |
| 2 |
| 1 1 2 2 |
| 4 |
| 1 3 1 4 3 4 2 2 |
| 5 |
| 1 2 1 2 3 4 3 5 4 5 |
| 3 |
| 1 2 3 1 2 3 |
| 4 |
| 2 3 2 4 1 3 4 1 |

| output |
| :--- |
| 1 2 |
| 1 3 4 2 |
| 1 2 3 4 5 |
| 1 2 3 |
| 2 3 4 1 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, ai;
  vector<unsigned short int> a;
  vector<unsigned short int> p;
  cin >> t;
  while (t--) {
    cin >> n;
    for (unsigned short int i = 0; i < (n * 2); i++) {
      cin >> ai;
      a.push_back(ai);
    }
    while (!a.empty()) {
      p.push_back(a.at(0));
      a.erase(find(a.begin() + 1, a.end(), a.at(0)));
      a.erase(a.begin());
    }
    for (auto e : p) {
      cout << e << " ";
    }
    cout << endl;
    a.clear();
    p.clear();
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
  a = list(map(int, input().split(" ")))
  p = list()
  while (bool(len(a))):
    p.append(a[0])
    a.pop(a.index(a[0], 1))
    a.pop(0)
  for e in p:
    print(e, end=" ")
  print(end="\n")
  t -= 1
```