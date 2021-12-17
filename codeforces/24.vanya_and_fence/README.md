# Vanya and Fence
**Problem code**: 677A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Vanya and his friends are walking along the fence of height `h` and they do not want the guard to notice them. In order to achieve this the height of each of the friends should not exceed `h`. If the height of some person is greater than `h` he can bend down and then he surely won't be noticed by the guard. The height of the i-th person is equal to `ai`.

Consider the width of the person walking as usual to be equal to 1, while the width of the bent person is equal to 2. Friends want to talk to each other while walking, so they would like to walk in a single row. What is the minimum width of the road, such that friends can walk in a row and remain unattended by the guard?

## Input
The first line of the input contains two integers n and `h (1 ≤ n ≤ 1000, 1 ≤ h ≤ 1000)` — the number of friends and the height of the fence, respectively.

The second line contains n integers `ai (1 ≤ ai ≤ 2h)`, the i-th of them is equal to the height of the i-th person.

## Output
Print a single integer — the minimum possible valid width of the road.

## Examples
| input |
| :--- |
| 3 7 |
| 4 5 14 |

| output |
| :--- |
| 4 |

| input |
| :--- |
| 6 1 |
| 1 1 1 1 1 1 |

| output |
| :--- |
| 6 |

| input |
| :--- |
| 6 5 |
| 7 6 8 9 10 5 |

| output |
| :--- |
| 11 |

## Note
In the first sample, only person number 3 must bend down, so the required width is equal to `1 + 1 + 2 = 4`.

In the second sample, all friends are short enough and no one has to bend, so the width `1 + 1 + 1 + 1 + 1 + 1 = 6` is enough.

In the third sample, all the persons have to bend, except the last one. The required minimum width of the road is equal to `2 + 2 + 2 + 2 + 2 + 1 = 11`.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, h, a, min_width = 0;
  cin >> n >> h;
  while (n--) {
    cin >> a;
    if (a >= 1 && a <= (2 * h)) {
      if (a <= h) {
        min_width++;
      }
      else {
        min_width += 2;
      }
    }
  }
  cout << min_width << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n, h = list(map(int, input().split(" ")))
min_width = 0
a = [int(height) for height in input().split(" ")]
for i in range(0, n):
  if (a[i] >= 1 and a[i] <= (2 * h)):
    if (a[i] <= h):
      min_width += 1
    else:
      min_width += 2
print(min_width)
```