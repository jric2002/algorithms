# Stones on the Table
**Problem code**: 266A  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

There are `n` stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.

## Input
The first line contains integer `n (1 ≤ n ≤ 50)` — the number of stones on the table.

The next line contains string `s`, which represents the colors of the stones. We'll consider the stones in the row numbered from `1` to `n` from left to right. Then the i-th character `s` equals "`R`", if the i-th stone is red, "`G`", if it's green and "`B`", if it's blue.

## Output
Print a single integer — the answer to the problem.

## Examples
| input |
| :--- |
| 3 |
| RRG |

| output |
| :--- |
| 1 |

| input |
| :--- |
| 5 |
| RRRRR |

| output |
| :--- |
| 4 |

| input |
| :--- |
| 4 |
| BRBG |

| output |
| :--- |
| 0 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  unsigned short int stones_taken = 0;
  char current_stone, previous_stone;
  cin >> n;
  if (n != 1) {
    cin >> previous_stone;
    for (unsigned short int i = 0; i < (n - 1); i++) {
      cin >> current_stone;
      if (current_stone == previous_stone) {
        stones_taken++;
      }
      previous_stone = current_stone;
    }
  }
  cout << stones_taken << endl;
  return 0;
}
```

The solution in **Python 3**:
```python

```