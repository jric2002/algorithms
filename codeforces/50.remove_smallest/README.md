# Remove Smallest
**Problem code**: 1399A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

You are given the array `a` consisting of `n` positive (greater than zero) integers.

In one move, you can choose two indices `i` and `j (i ≠ j)` such that the absolute difference between `ai` and `aj` is no more than one `(|ai − aj| ≤ 1)` and remove the smallest of these two elements. If two elements are equal, you can remove any of them (but exactly one).

Your task is to find if it is possible to obtain the array consisting of **only one element** using several (possibly, zero) such moves or not.

You have to answer `t` independent test cases.

## Input
The first line of the input contains one integer `t (1 ≤ t ≤ 1000)` — the number of test cases. Then `t` test cases follow.

The first line of the test case contains one integer `n (1 ≤ n ≤ 50)` — the length of `a`. The second line of the test case contains `n` integers `a1, a2, …, an (1 ≤ ai ≤ 100)`, where `ai` is the `i-th` element of `a`.

## Output
For each test case, print the answer: "`YES`" if it is possible to obtain the array consisting of **only one element** using several (possibly, zero) moves described in the problem statement, or "`NO`" otherwise.

## Examples
| input |
| :--- |
| 5 |
| 3 |
| 1 2 2 |
| 4 |
| 5 5 5 5 |
| 3 |
| 1 2 4 |
| 4 |
| 1 3 4 4 |
| 1 |
| 100 |

| output |
| :--- |
| YES |
| YES |
| NO |
| NO |
| YES |

## Note
In the first test case of the example, we can perform the following sequence of moves:
* choose `i = 1` and `j = 3` and remove `ai` (so `a` becomes `[2;2]`);
* choose `i = 1` and `j = 2` and remove `aj` (so `a` becomes `[2]`).

In the second test case of the example, we can choose any possible `i` and `j` any move and it doesn't matter which element we remove.

In the third test case of the example, there is no way to get rid of `2` and `4`.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <algorithm>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, a;
  vector<unsigned short int> numbers;
  bool status;
  cin >> t;
  for (unsigned short int i = 0; i < t; i++) {
    cin >> n;
    for (unsigned short int j = 0; j < n; j++) {
      cin >> a;
      numbers.push_back(a);
    }
    sort(numbers.begin(), numbers.end());
    status = true;
    for (unsigned short int j = 0; j < (n - 1); j++) {
      if (!(abs(numbers.at(j) - numbers.at(j + 1)) <= 1)) {
        status = false;
        break;
      }
    }
    if (status) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
    numbers.clear();
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
for i in range(0, n):
  t = int(input())
  numbers = list(map(int, input().split(" ")))
  numbers.sort()
  status = True
  for j in range(0, (t - 1)):
    if (abs(numbers[j] - numbers[j + 1]) > 1):
      status = False
      break
  if (status):
    print("YES")
  else:
    print("NO")
```