# Arrival of the General
**Problem code**: 144A  
**Tags**: implementation  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

A Ministry for Defense sent a general to inspect the Super Secret Military Squad under the command of the Colonel SuperDuper. Having learned the news, the colonel ordered to all n squad soldiers to line up on the parade ground.

By the military charter the soldiers should stand in the order of non-increasing of their height. But as there's virtually no time to do that, the soldiers lined up in the arbitrary order. However, the general is rather short-sighted and he thinks that the soldiers lined up correctly if the first soldier in the line has the maximum height and the last soldier has the minimum height. Please note that the way other solders are positioned does not matter, including the case when there are several soldiers whose height is maximum or minimum. Only the heights of the **first** and the **last** soldier are important.

For example, the general considers the sequence of heights `(4, 3, 4, 2, 1, 1)` correct and the sequence `(4, 3, 1, 2, 2)` wrong.

Within one second the colonel can swap any two neighboring soldiers. Help him count the minimum time needed to form a line-up which the general will consider correct.

## Input
The first input line contains the only integer `n (2 ≤ n ≤ 100)` which represents the number of soldiers in the line. The second line contains integers `a1, a2, ..., an (1 ≤ ai ≤ 100)` the values of the soldiers' heights in the order of soldiers' heights' increasing in the order from the beginning of the line to its end. The numbers are space-separated. Numbers `a1, a2, ..., an` are not necessarily different.

## Output
Print the only integer — the minimum number of seconds the colonel will need to form a line-up the general will like.

## Examples
| input |
| :--- |
| 4 |
| 33 44 11 22 |

| output |
| :--- |
| 2 |

| input |
| :--- |
| 7 |
| 10 10 58 31 63 40 76 |

| output |
| :--- |
| 10 |

## Note
In the first sample the colonel will need to swap the first and second soldier and then the third and fourth soldier. That will take 2 seconds. The resulting position of the soldiers is `(44, 33, 22, 11)`.

In the second sample the colonel may swap the soldiers in the following sequence:
```
1. (10, 10, 58, 31, 63, 40, 76)
2. (10, 58, 10, 31, 63, 40, 76)
3. (10, 58, 10, 31, 63, 76, 40)
4. (10, 58, 10, 31, 76, 63, 40)
5. (10, 58, 31, 10, 76, 63, 40)
6. (10, 58, 31, 76, 10, 63, 40)
7. (10, 58, 31, 76, 63, 10, 40)
8. (10, 58, 76, 31, 63, 10, 40)
9. (10, 76, 58, 31, 63, 10, 40)
10. (76, 10, 58, 31, 63, 10, 40)
11. (76, 10, 58, 31, 63, 40, 10)
```
## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, a, total_seconds;
  unsigned short int greater_height, lower_height;
  unsigned last_position, pos_highest_height, pos_lowest_height;
  cin >> n;
  unsigned short int height_soldiers[n];
  last_position = n - 1;
  for (unsigned short int i = 0; i < n; i++) {
    cin >> a;
    height_soldiers[i] = a;
    if (i == 0) {
      greater_height = a;
      pos_highest_height = i;
      lower_height = a;
      pos_lowest_height = i;
    }
    else {
      if (greater_height < a) {
        greater_height = a;
        pos_highest_height = i;
      }
      if (lower_height >= a) {
        lower_height = a;
        pos_lowest_height = i;
      }
    }
  }
  if (pos_lowest_height > pos_highest_height) {
    total_seconds = pos_highest_height + (last_position - pos_lowest_height);
  }
  else {
    total_seconds = pos_highest_height + (last_position - pos_lowest_height) - 1;
  }
  cout << total_seconds << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
total_seconds = 0
height_soldiers = list(map(int, input().split(" ")))
last_position = n - 1
greater_height = 0
lower_height = 0
pos_highest_height = 0
pos_lowest_height = 0
for i in range(0, n):
  if (i == 0):
    greater_height = height_soldiers[i]
    pos_highest_height = i
    lower_height = height_soldiers[i]
    pos_lowest_height = i
  else:
    if (greater_height < height_soldiers[i]):
      greater_height = height_soldiers[i]
      pos_highest_height = i
    if (lower_height >= height_soldiers[i]):
      lower_height = height_soldiers[i]
      pos_lowest_height = i
if (pos_lowest_height > pos_highest_height):
  total_seconds = pos_highest_height + (last_position - pos_lowest_height)
else:
  total_seconds = pos_highest_height + (last_position - pos_lowest_height) - 1
print(total_seconds)
```