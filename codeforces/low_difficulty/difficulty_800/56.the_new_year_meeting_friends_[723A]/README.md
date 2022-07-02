# The New Year: Meeting Friends
**Problem code**: 723A  
**Tags**: implementation, math, sortings  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

There are three friend living on the straight line `Ox` in Lineland. The first friend lives at the point `x1`, the second friend lives at the point `x2`, and the third friend lives at the point `x3`. They plan to celebrate the New Year together, so they need to meet at one point. What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?

It's guaranteed that the optimal answer is always integer.

## Input
The first line of the input contains three **distinct** integers `x1`, `x2` and `x3 (1 ≤ x1, x2, x3 ≤ 100)` — the coordinates of the houses of the first, the second and the third friends respectively.

## Output
Print one integer — the minimum total distance the friends need to travel in order to meet together.

## Examples
| input |
| :--- |
| 7 1 4 |

| output |
| :--- |
| 6 |

| input |
| :--- |
| 30 20 10 |

| output |
| :--- |
| 20 |

## Note
In the first sample, friends should meet at the point `4`. Thus, the first friend has to travel the distance of `3` (from the point `7` to the point `4`), the second friend also has to travel the distance of `3` (from the point `1` to the point `4`), while the third friend should not go anywhere because he lives at the point `4`.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int coordinates[3], min_dis = 0;
  cin >> coordinates[0] >> coordinates[1] >> coordinates[2];
  sort(coordinates, coordinates + 3);
  min_dis = (coordinates[1] - coordinates[0]) + (coordinates[2] - coordinates[1]);
  cout << min_dis << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
coordinates = list(map(int, input().split(" ")))
coordinates.sort()
min_dis = (coordinates[1] - coordinates[0]) + (coordinates[2] - coordinates[1])
print(min_dis)
```