# Watermelon
**Problem code**: 4A  
**Tags**: brute force, math  
**Time limit per test**: 1 second  
**Memory limit per test**: 64 megabytes  
**Input**: standard input  
**Output**: standard output  

One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

## Input
The first (and the only) input line contains integer number `w (1 ≤ w ≤ 100)` — the weight of the watermelon bought by the boys.

## Output
Print `YES`, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and `NO` in the opposite case.

## Examples
| input |
| :--- |
| 8 |

| output |
| :--- |
| YES |

## Note
For example, the boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos).

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int w;
  cin >> w;
  if (w >= 1 && w <= 100) {
    if ((w == 2) || ((w % 2) != 0)) {
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
    }
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
w = int(input())
if (w >= 1 and w <= 100):
  if ((w == 2) or ((w % 2) != 0)):
    print("NO")
  else:
    print("YES")
```