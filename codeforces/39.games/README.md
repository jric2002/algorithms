# Games
**Problem code**: 268A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Manao works on a sports TV. He's spent much time watching the football games of some country. After a while he began to notice different patterns. For example, each team has two sets of uniforms: home uniform and guest uniform. When a team plays a game at home, the players put on the home uniform. When a team plays as a guest on somebody else's stadium, the players put on the guest uniform. The only exception to that rule is: when the home uniform color of the host team matches the guests' uniform, the host team puts on its guest uniform as well. For each team the color of the home and guest uniform is different.

There are n teams taking part in the national championship. The championship consists of `n·(n - 1)` games: each team invites each other team to its stadium. At this point Manao wondered: how many times during the championship is a host team going to put on the guest uniform? Note that the order of the games does not affect this number.

You know the colors of the home and guest uniform for each team. For simplicity, the colors are numbered by integers in such a way that no two distinct colors have the same number. Help Manao find the answer to his question.

## Input
The first line contains an integer `n (2 ≤ n ≤ 30)`. Each of the following `n` lines contains a pair of distinct space-separated integers `hi, ai (1 ≤ hi, ai ≤ 100)` — the colors of the i-th team's home and guest uniforms, respectively.

## Output
In a single line print the number of games where the host team is going to play in the guest uniform.

## Examples
| input |
| :--- |
| 3 |
| 1 2 |
| 2 4 |
| 3 4 |

| output |
| :--- |
| 1 |

| input |
| :--- |
| 4 |
| 100 42 |
| 42 100 |
| 5 42 |
| 100 5 |

| output |
| :--- |
| 5 |

| input |
| :--- |
| 2 |
| 1 2 |
| 1 2 |

| output |
| :--- |
| 0 |

## Note
In the first test case the championship consists of 6 games. The only game with the event in question is the game between teams 2 and 1 on the stadium of team 2.

In the second test sample the host team will have to wear guest uniform in the games between teams: 1 and 2, 2 and 1, 2 and 3, 3 and 4, 4 and 2 (the host team is written first).

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, h, a;
  cin >> n;
  unsigned short int color_uniforms[n][2];
  unsigned short int playing_as_guest = 0;
  for (unsigned short int i = 0; i < n; i++) {
    cin >> h >> a;
    color_uniforms[i][0] = h;
    color_uniforms[i][1] = a;
  }
  for (unsigned short int i = 0; i < n; i++) {
    for (unsigned short int j = 0; j < n; j++) {
      if (i != j) {
        if (color_uniforms[i][0] == color_uniforms[j][1]) {
          playing_as_guest += 1;
        }
      }
    }
  }
  cout << playing_as_guest << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
color_uniforms = []
playing_as_guest = 0
for i in range(0, n):
  h, a = list(map(int, input().split(" ")))
  color_uniforms.append([h, a])
for i in range(0, n):
  for j in range(0, n):
    if (i != j):
      if (color_uniforms[i][0] == color_uniforms[j][1]):
        playing_as_guest += 1
print(playing_as_guest)
```