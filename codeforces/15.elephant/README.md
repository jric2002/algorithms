# Elephant
**Problem code**: 617A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

An elephant decided to visit his friend. It turned out that the elephant's house is located at point `0` and his friend's house is located at point `x(x > 0)` of the coordinate line. In one step the elephant can move `1`, `2`, `3`, `4` or `5` positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

## Input
The first line of the input contains an integer `x (1 ≤ x ≤ 1 000 000)` — The coordinate of the friend's house.

## Output
Print the minimum number of steps that elephant needs to make to get from point `0` to point `x`.

## Examples
| input |
| :--- |
| 5 |

| output |
| :--- |
| 1 |

| input |
| :--- |
| 12 |

| output |
| :--- |
| 3 |

## Note
In the first sample the elephant needs to make one step of length `5` to reach the point `x`.

In the second sample the elephant can get to point `x` if he moves by `3`, `5` and `4`. There are other ways to get the optimal answer but the elephant cannot reach `x` in less than three moves.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int x, min_num_steps;
  cin >> x;
  if ((x % 5) == 0) {
    min_num_steps = x / 5;
  }
  else {
    min_num_steps = (x / 5) + 1;
  }
  cout << min_num_steps << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
x = int(input())
min_num_steps = 0
if ((x % 5) == 0):
  min_num_steps = int(x / 5)
else:
  min_num_steps = int(x / 5) + 1
print(min_num_steps)
```