# Honest Coach
**Problem code**: 1360B  
**Tags**: greedy, sortings  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

There are `n` athletes in front of you. Athletes are numbered from `1` to `n` from left to right. You know the strength of each athlete — the athlete number `i` has the strength `si`.

You want to split all athletes into two teams. Each team must have at least one athlete, and each athlete must be exactly in one team.

You want the strongest athlete from the first team to differ as little as possible from the weakest athlete from the second team. Formally, you want to split the athletes into two teams `A` and `B` so that the value `|max(A) − min(B)|` is as small as possible, where `max(A)` is the maximum strength of an athlete from team `A`, and `min(B)` is the minimum strength of an athlete from team `B`.

For example, if `n = 5` and the strength of the athletes is `s = [3,1,2,6,4]`, then one of the possible split into teams is:

* first team: `A = [1,2,4]`,
* second team: `B = [3,6]`.

In this case, the value `|max(A) − min(B)|` will be equal to `|4 − 3| = 1`. This example illustrates one of the ways of optimal split into two teams.

Print the minimum value `|max(A) − min(B)|`.

## Input
The first line contains an integer `t (1 ≤ t ≤ 1000)` — the number of test cases in the input. Then `t` test cases follow.

Each test case consists of two lines.

The first line contains positive integer `n (2 ≤ n ≤ 50)` — number of athletes.

The second line contains `n` positive integers `s1, s2 , …, sn (1 ≤ si ≤ 1000)`, where `si` — is the strength of the `i-th` athlete. Please note that `s` values may not be distinct.

## Output
For each test case print one integer — the minimum value of `|max(A) − min(B)|` with the optimal split of all athletes into two teams. Each of the athletes must be a member of exactly one of the two teams.

## Examples
| input |
| :--- |
| 5 |
| 5 |
| 3 1 2 6 4 |
| 6 |
| 2 1 3 2 4 3 |
| 4 |
| 7 9 3 1 |
| 2 |
| 1 1000 |
| 3 |
| 100 150 200 |

| output |
| :--- |
| 1 |
| 0 |
| 2 |
| 999 |
| 50 |

## Note
The first test case was explained in the statement. In the second test case, one of the optimal splits is `A = [2,1]`, `B = [3,2,4,3]`, so the answer is `|2 − 2| = 0`.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <algorithm>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, si, pos;
  vector<short int> s;
  vector<short int> r;
  cin >> t;
  while (t--) {
    cin >> n;
    for (unsigned short int i = 0; i < n; i++) {
      cin >> si;
      s.push_back(si);
    }
    sort(s.begin(), s.end());
    for (unsigned short int i = 1; i < n; i++) {
      r.push_back(s.at(i) - s.at(i - 1));
    }
    cout << *min_element(r.begin(), r.end()) << endl;
    s.clear();
    r.clear();
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
  s = [int(x) for x in input().split(" ")]
  r = []
  s.sort()
  for i in range(1, n):
    r.append(s[i] - s[i - 1])
  print(min(r))
  t -= 1
```