# Black Square
**Problem code**: 431A  
**Tags**: implementation  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Quite recently, a very smart student named Jury decided that lectures are boring, so he downloaded a game called "`Black Square`" on his super cool touchscreen phone.

In this game, the phone's screen is divided into four vertical strips. Each second, a black square appears on some of the strips. According to the rules of the game, Jury must use this second to touch the corresponding strip to make the square go away. As Jury is both smart and lazy, he counted that he wastes exactly `ai` calories on touching the `i-th` strip.

You've got a string `s`, describing the process of the game and numbers `a1, a2, a3, a4`. Calculate how many calories Jury needs to destroy all the squares?

## Input
The first line contains four space-separated integers **a1, a2, a3, a4 (0 ≤ a1, a2, a3, a4 ≤ 10<sup>4</sup>)**.

The second line contains string **s (1 ≤ |s| ≤ 10<sup>5</sup>)**, where the `і-th` character of the string equals "`1`", if on the i-th second of the game the square appears on the first strip, "`2`", if it appears on the second strip, "`3`", if it appears on the third strip, "`4`", if it appears on the fourth strip.

## Output
Print a single integer — the total number of calories that Jury wastes.

## Examples
| input |
| :--- |
| 1 2 3 4 |
| 123214 |

| output |
| :--- |
| 13 |

| input |
| :--- |
| 1 5 3 2 |
| 11221 |

| output |
| :--- |
| 13 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int a[4], total_calories, size_s;
  string s;
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  cin >> s;
  size_s = s.size();
  total_calories = 0;
  for (unsigned int i = 0; i < size_s; i++) {
    if (s[i] == '1') {
      total_calories += a[0];
    }
    else if (s[i] == '2') {
      total_calories += a[1];
    }
    else if (s[i] == '3') {
      total_calories += a[2];
    }
    else {
      total_calories += a[3];
    }
  }
  cout << total_calories << endl;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
a = list(map(int, input().split(" ")))
s = str(input())
size_s = len(s)
total_calories = 0
for i in range(0, size_s):
  if (s[i] == '1'):
    total_calories += a[0]
  elif (s[i] == '2'):
    total_calories += a[1]
  elif (s[i] == '3'):
    total_calories += a[2]
  else:
    total_calories += a[3]
print(total_calories)
```