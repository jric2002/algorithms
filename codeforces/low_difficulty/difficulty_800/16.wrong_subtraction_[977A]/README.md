# Wrong Subtraction
**Problem code**: 977A  
**Tags**: implementation  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Little girl Tanya is learning how to decrease a number by one, but she does it wrong with a number consisting of two or more digits. Tanya subtracts one from a number by the following algorithm:
* if the last digit of the number is non-zero, she decreases the number by one;
* if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).

You are given an integer number `n`. Tanya will subtract one from it `k` times. Your task is to print the result after all `k` subtractions.

It is guaranteed that the result will be positive integer number.

## Input
The first line of the input contains two integer numbers `n` and `k (2 ≤ n ≤ 10^9, 1 ≤ k ≤50)` — the number from which Tanya will subtract and the number of subtractions correspondingly.

## Output
Print one integer number — the result of the decreasing `n` by one `k` times.

It is guaranteed that the result will be positive integer number.

## Examples
| input |
| :--- |
| 512 4 |

| output |
| :--- |
| 50 |

| input |
| :--- |
| 1000000000 9 |

| output |
| :--- |
| 1 |

## Note
The first example corresponds to the following sequence: `512 → 511 → 510 → 51 → 50`.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int n;
  unsigned short int k;
  cin >> n >> k;
  while (k--) {
    if ((n % 10) == 0) {
      n = n / 10;
    }
    else {
      n--;
    }
  }
  cout << n << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
input_data = input().split(" ")
n = int(input_data[0])
k = int(input_data[1])
while (k):
  if ((n % 10) == 0):
    n = int(n / 10)
  else:
    n -= 1
  k -= 1
print(n)
```