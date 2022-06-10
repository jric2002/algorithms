# Plus One on the Subset
**Problem code**: 1624A  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Polycarp got an array of integers `a[1…n]` as a gift. Now he wants to perform a certain number of operations (possibly zero) so that all elements of the array become the same (that is, to become `a1 = a2 = ⋯ = an`).

* In one operation, he can take some indices in the array and increase the elements of the array at those indices by `1`.

For example, let `a = [4, 2, 1, 6, 2]`. He can perform the following operation: select indices 1, 2, and 4 and increase elements of the array in those indices by `1`. As a result, in one operation, he can get a new state of the array `a = [5, 3, 1, 7, 2]`.

What is the minimum number of operations it can take so that all elements of the array become equal to each other (that is, to become `a1 = a2 = ⋯ = an`)?

## Input
The first line of the input contains a single integer **t (1 ≤ t ≤ 10<sup>4</sup>)**  — the number of test cases in the test.

The following are descriptions of the input test cases.

The first line of the description of each test case contains one integer `n (1 ≤ n ≤ 50)`  — the array `a`.

The second line of the description of each test case contains `n` integers **a1, a2, …, an (1 ≤ ai ≤ 10<sup>9</sup>)**  — elements of the array `a`.

## Output
For each test case, print one integer  — the minimum number of operations to make all elements of the array `a` equal.

## Examples
| input |
| :--- |
| 3 |
| 6 |
| 3 4 2 4 1 2 |
| 3 |
| 1000 1002 998 |
| 2 |
| 12 11 |

| output |
| :--- |
| 3 |
| 4 |
| 1 |

## Note
First test case:

* `a = [3,4,2,4,1,2]` take `a3`, `a5` and perform an operation plus one on them, as a result we get `a = [3,4,3,4,2,2]`.
* `a = [3,4,3,4,2,2]` we take `a1`, `a5`, `a6` and perform an operation on them plus one, as a result we get `a = [4,4,3,4,3,3]`.
* a = [4,4,3,4,3,3] we take `a3`, `a5`, `a6` and perform an operation on them plus one, as a result we get `a = [4,4,4,4,4,4]`.

There are other sequences of `3` operations, after the application of which all elements become equal.

Second test case:

* `a = [1000,1002,998]` 2 times we take `a1`, `a3` and perform an operation plus one on them, as a result we get `a = [1002,1002,1000]`.
* a=[1002,1002,1000] also take `a3` 2 times and perform an operation plus one on it, as a result we get `a = [1002,1002,1002]`.

Third test case:

* `a = [12,11]` take `a2` and perform an operation plus one on it, as a result we get `a = [12,12]`.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int t, n;
  long int a, major, minor;
  cin >> t;
  while (t--) {
    cin >> n;
    cin >> a;
    major = minor = a;
    n--;
    while (n--) {
      cin >> a;
      if (major < a) {
        major = a;
      }
      if (minor > a) {
        minor = a;
      }
    }
    cout << (major - minor) << endl;
  }
  return 0;
}
```
Another possible solution in **C++**:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int t, n;
  long int e;
  vector<long int> a;
  cin >> t;
  while (t--) {
    cin >> n;
    while (n--) {
      cin >> e;
      a.push_back(e);
    }
    sort(a.begin(), a.end());
    cout << (a.at(a.size() - 1) - a.at(0)) << endl;
    a.clear();
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
  major = minor = a[0]
  for i in range(1, n):
    if (major < a[i]):
      major = a[i]
    if (minor > a[i]):
      minor = a[i]
  print(major - minor)
  t -= 1
```