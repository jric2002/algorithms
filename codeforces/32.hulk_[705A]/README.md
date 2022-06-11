# Hulk
**Problem code**: 705A  
**Tags**: implementation  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Dr. Bruce Banner hates his enemies (like others don't). As we all know, he can barely talk when he turns into the incredible Hulk. That's why he asked you to help him to express his feelings.

Hulk likes the Inception so much, and like that his feelings are complicated. They have `n` layers. The first layer is hate, second one is love, third one is hate and so on...

For example if `n = 1`, then his feeling is "`I hate it`" or if `n = 2` it's "`I hate that I love it`", and if `n = 3` it's "`I hate that I love that I hate it`" and so on.

Please help Dr. Banner.

## Input
The only line of the input contains a single integer `n (1 ≤ n ≤ 100)` — the number of layers of love and hate.

## Output
Print Dr.Banner's feeling in one line.

## Examples
| input |
| :--- |
| 1 |

| output |
| :--- |
| I hate it |

| input |
| :--- |
| 2 |

| output |
| :--- |
| I hate that I love it |

| input |
| :--- |
| 3 |

| output |
| :--- |
| I hate that I love that I hate it |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  string hate = "I hate";
  string love = "I love";
  string feeling = hate;
  cin >> n;
  if (n > 1) {
    for (unsigned short int i = 2; i <= n; i++) {
      feeling += " that ";
      if ((i % 2) != 0) {
        feeling += hate;
      }
      else {
        feeling += love;
      }
    }
  }
  feeling += " it";
  cout << feeling << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
hate = "I hate"
love = "I love"
feeling = hate
if (n > 1):
  for i in range(2, (n + 1)):
    feeling += " that "
    if ((i % 2) != 0):
      feeling += hate
    else:
      feeling += love
feeling += " it"
print(feeling)
```