# George and Accommodation
**Problem code**: 467A  
**Tags**: implementation  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

George has recently entered the BSUCP (Berland State University for Cool Programmers). George has a friend Alex who has also entered the university. Now they are moving into a dormitory.

George and Alex want to live in the same room. The dormitory has n rooms in total. At the moment the i-th room has `pi` people living in it and the room can accommodate `qi` people in total (`pi ≤ qi`). Your task is to count how many rooms has free place for both George and Alex.

## Input
The first line contains a single integer `n (1 ≤ n ≤ 100)` — the number of rooms.

The i-th of the next `n` lines contains two integers `pi` and `qi (0 ≤ pi ≤ qi ≤ 100)` — the number of people who already live in the i-th room and the room's capacity.

## Output
Print a single integer — the number of rooms where George and Alex can move in.

## Examples
| input |
| :--- |
| 3 |
| 1 1 |
| 2 2 |
| 3 3 |

| output |
| :--- |
| 0 |

| input |
| :--- |
| 3 |
| 1 10 |
| 0 10 |
| 10 10 |

| output |
| :--- |
| 2 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, p, q, available_rooms = 0;
  cin >> n;
  while (n--) {
    cin >> p >> q;
    if ((q - p) >= 2) {
      available_rooms++;
    }
  }
  cout << available_rooms << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
available_rooms = 0
while (n):
  p, q = list(map(int, input().split(" ")))
  if ((q - p) >= 2):
    available_rooms += 1
  n -= 1
print(available_rooms)
```