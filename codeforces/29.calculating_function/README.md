# Calculating Function
**Problem code**: 486A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

For a positive integer `n` let's define a function `f`:

**f(n) =  - 1 + 2 - 3 + .. + ( - 1)<sup>n</sup>n**

Your task is to calculate `f(n)` for a given integer `n`.

## Input
The single line contains the positive integer **n (1 ≤ n ≤ 10<sup>15</sup>)**.

## Output
Print `f(n)` in a single line.

## Examples
| input |
| :--- |
| 4 |

| output |
| :--- |
| 2 |

| input |
| :--- |
| 5 |

| output |
| :--- |
| -3 |

## Note
`f(4) =  - 1 + 2 - 3 + 4 = 2`

`f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3`

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  signed long long int n;
  cin >> n;
  if (n != 0) {
    if ((n % 2) != 0) {
      n += 1;
      n = -1 * n;
    }
    n /= 2;
  }
  else {
    n++;
  }
  cout << n << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
if (n != 0):
  if ((n % 2) != 0):
    n += 1
    n = -1 * n
  n = int(n / 2)
else:
  n += 1
print(n)
```