# I Wanna Be the Guy
**Problem code**: 469A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

There is a game called "I Wanna Be the Guy", consisting of `n` levels. Little `X` and his friend Little `Y` are addicted to the game. Each of them wants to pass the whole game.

Little `X` can pass only `p` levels of the game. And Little `Y` can pass only `q` levels of the game. You are given the indices of levels Little `X` can pass and the indices of levels Little `Y` can pass. Will Little `X` and Little `Y` pass the whole game, if they cooperate each other?

## Input
The first line contains a single integer `n (1 ≤  n ≤ 100)`.

The next line contains an integer `p (0 ≤ p ≤ n)` at first, then follows `p` distinct integers `a1, a2, ..., ap (1 ≤ ai ≤ n)`. These integers denote the indices of levels Little `X` can pass. The next line contains the levels Little `Y` can pass in the same format. It's assumed that levels are numbered from `1` to `n`.

## Output
If they can pass all the levels, print "`I become the guy.`". If it's impossible, print "`Oh, my keyboard!`" (without the quotes).

## Examples
| input |
| :--- |
| 4 |
| 3 1 2 3 |
| 2 2 4 |

| output |
| :--- |
| I become the guy. |

| input |
| :--- |
| 4 |
| 3 1 2 3 |
| 2 2 3 |

| output |
| :--- |
| Oh, my keyboard! |

# Note
In the first sample, Little `X` can pass levels `[1 2 3]`, and Little `Y` can pass level `[2 4]`, so they can pass all the levels both.

In the second sample, no one can pass level `4`.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, px, py;
  bool status = true;
  cin >> n;
  cin >> px;
  unsigned short int *x_levels = new unsigned short int[px];
  for (unsigned short int i = 0; i < px; i++) {
    cin >> x_levels[i];
  }
  cin >> py;
  unsigned short int *y_levels = new unsigned short int[py];
  for (unsigned short int i = 0; i < py; i++) {
    cin >> y_levels[i];
  }
  unsigned short int i = 1;
  unsigned short int counter = 0;
  while (i <= n && status) {
    status = false;
    for (unsigned short int j = 0; j < px; j++) {
      if (x_levels[j] == i) {
        status = true;
        counter++;
        break;
      }
    }
    for (unsigned short int j = 0; j < py && !status; j++) {
      if (y_levels[j] == i) {
        status = true;
        counter++;
        break;
      }
    }
    i++;
  }
  if (n == counter) {
    cout << "I become the guy." << endl;
  }
  else {
    cout << "Oh, my keyboard!" << endl;
  }
  delete[] x_levels;
  delete[] y_levels;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
p = 0
levels = []
input_data = list(map(int, input().split(" ")))
p += input_data[0]
levels.extend(input_data[1:])
input_data = list(map(int, input().split(" ")))
p += input_data[0]
levels.extend(input_data[1:])
status = True
counter = 0
i = 1
while ((i <= n) and status):
  status = False
  for j in range(0, p):
    if (levels[j] == i):
      status = True
      counter += 1
      break
  i += 1
if (n == counter):
  print("I become the guy.")
else:
  print("Oh, my keyboard!")
```