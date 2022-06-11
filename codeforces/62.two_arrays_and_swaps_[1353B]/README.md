# Two Arrays And Swaps
**Problem code**: 1353B  
**Tags**: greedy, sortings  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

You are given two arrays `a` and `b` both consisting of `n` positive (greater than zero) integers. You are also given an integer `k`.

In one move, you can choose two indices `i` and `j (1 ≤ i, j ≤ n)` and swap `ai` and `bj` (i.e. `ai` becomes `bj` and vice versa). Note that `i` and `j` can be equal or different (in particular, swap `a2` with `b2` or swap `a3` and `b9` both are acceptable moves).

Your task is to find the `maximum` possible sum you can obtain in the array `a` if you can do no more than (i.e. at most) `k` such moves (swaps).

You have to answer `t` independent test cases.

## Input
The first line of the input contains one integer `t (1 ≤ t ≤ 200)` — the number of test cases. Then `t` test cases follow.

The first line of the test case contains two integers `n` and `k (1 ≤ n ≤ 30; 0 ≤ k ≤ n)` — the number of elements in `a` and `b` and the maximum number of moves you can do. The second line of the test case contains `n` integers `a1, a2 , …, an (1 ≤ ai ≤ 30)`, where `ai` is the `i-th` element of `a`. The third line of the test case contains `n` integers `b1 , b2 , …, bn (1 ≤ bi ≤ 30)`, where `bi` is the `i-th` element of `b`.

## Output
For each test case, print the answer — the `maximum` possible sum you can obtain in the array `a` if you can do no more than (i.e. at most) `k` swaps.

## Examples
| input |
| :--- |
| 5 |
| 2 1 |
| 1 2 |
| 3 4 |
| 5 5 |
| 5 5 6 6 5 |
| 1 2 5 4 3 |
| 5 3 |
| 1 2 3 4 5 |
| 10 9 10 10 9 |
| 4 0 |
| 2 2 4 3 |
| 2 4 2 3 |
| 4 4 |
| 1 2 2 1 |
| 4 4 5 4 |

| output |
| :--- |
| 6 |
| 27 |
| 39 |
| 11 |
| 17 |

## Note
In the first test case of the example, you can swap `a1 = 1` and `b2 = 4`, so `a = [4,2]` and `b = [3,1]`.

In the second test case of the example, you don't need to swap anything.

In the third test case of the example, you can swap `a1 = 1` and `b1 = 10`, `a3 = 3` and `b3 = 10` and `a2 = 2` and `b4 = 10`, so `a = [10,10,10,4,5]` and `b = [1,9,3,2,9]`.

In the fourth test case of the example, you cannot swap anything.

In the fifth test case of the example, you can swap arrays `a` and `b`, so `a = [4,4,5,4]` and `b = [1,2,2,1]`.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <algorithm>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, k, max_sum, number;
  vector<unsigned short int> a;
  vector<unsigned short int> b;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    for (unsigned short int i = 0; i < (n * 2); i++) {
      cin >> number;
      if (i < n) {
        a.push_back(number);
      }
      else {
        b.push_back(number);
      }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (unsigned short int i = 0, j = (n - 1); (i < k) && (a[i] < b[j]); i++, j--) {
      number = a[i];
      a[i] = b[j];
      b[j] = number;
    }
    max_sum = 0;
    for (vector<unsigned short int>::iterator it = a.begin(); it != a.end(); it++) {
      max_sum += *it;
    }
    cout << max_sum << endl;
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
  n, k = list(map(int, input().split(" ")))
  a = list(map(int, input().split(" ")))
  b = list(map(int, input().split(" ")))
  a.sort()
  b.sort()
  i = 0
  j = (n - 1)
  while ((i < k) and (a[i] < b[j])):
    number = a[i]
    a[i] = b[j]
    b[j] = number
    i += 1
    j -= 1
  max_sum = 0
  for i in range(0, n):
    max_sum += a[i]
  print(max_sum)
  t -= 1
```