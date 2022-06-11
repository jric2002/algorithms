# Domino piling
**Problem code**: 50A  
**Tags**: greedy, math  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

You are given a rectangular board of `M × N` squares. Also you are given an unlimited number of standard domino pieces of `2 x 1` squares. You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:

1. Each domino completely covers two squares.

2. No two dominoes overlap.

3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes, which can be placed under these restrictions.

## Input
In a single line you are given two integers M and N — board sizes in squares `(1 ≤ M ≤ N ≤ 16)`.

## Output
Output one number — the maximal number of dominoes, which can be placed.

## Examples
| input |
| :--- |
| 2 4 |

| output |
| :--- |
| 4 |

| input |
| :--- |
| 3 3 |

| output |
| :--- |
| 4 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int m, n;
  cin >> m >> n;
  if (m >= 1 && m <= n && n <= 16) {
    unsigned short int max_num_dominoes;
    max_num_dominoes = (m * n) / 2;
    cout << max_num_dominoes << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
import math
input_data = input().split(" ")
input_data = [int(e) for e in input_data]
m, n = input_data
if (m >= 1 and m <= n and n <= 16):
  num_max_dominoes = math.floor((m * n) / 2)
  print(num_max_dominoes)
```