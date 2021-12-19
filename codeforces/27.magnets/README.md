# Magnets
**Problem code**: 344A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Mad scientist Mike entertains himself by arranging rows of dominoes. He doesn't need dominoes, though: he uses rectangular magnets instead. Each magnet has two poles, positive (a "plus") and negative (a "minus"). If two magnets are put together at a close distance, then the like poles will repel each other and the opposite poles will attract each other.

Mike starts by laying one magnet horizontally on the table. During each following step Mike adds one more magnet horizontally to the right end of the row. Depending on how Mike puts the magnet on the table, it is either attracted to the previous one (forming a group of multiple magnets linked together) or repelled by it (then Mike lays this magnet at some distance to the right from the previous one). We assume that a sole magnet not linked to others forms a group of its own.

![Magnets - Example 1](./magnets-image-1.png)

Mike arranged multiple magnets in a row. Determine the number of groups that the magnets formed.

## Input
The first line of the input contains an integer `n (1 ≤ n ≤ 100000)` — the number of magnets. Then `n` lines follow. The i-th line `(1 ≤ i ≤ n)` contains either characters "`01`", if Mike put the i-th magnet in the "plus-minus" position, or characters "`10`", if Mike put the magnet in the "minus-plus" position.

## Output
On the single line of the output print the number of groups of magnets.

## Examples
| input |
| :--- |
| 6 |
| 10 |
| 10 |
| 10 |
| 01 |
| 10 |
| 10 |

| output |
| :--- |
| 3 |

| input |
| :--- |
| 4 |
| 01 |
| 01 |
| 10 |
| 10 |

| output |
| :--- |
| 2 |

## Note
The first testcase corresponds to the figure. The testcase has three groups consisting of three, one and two magnets.

The second testcase has two groups, each consisting of two magnets.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo */
using namespace std;
int main() {
  unsigned int n;
  unsigned int number_groups = 1;
  string magnet;
  char last_pole = ' ';
  cin >> n;
  while (n--) {
    cin >> magnet;
    if (last_pole == magnet[0]) {
      number_groups++;
    }
    last_pole = magnet[1];
  }
  cout << number_groups << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
number_groups = 1
last_pole = ''
while(n):
  magnet = str(input())
  if (last_pole == magnet[0]):
    number_groups += 1
  last_pole = magnet[1]
  n -= 1
print(number_groups)
```