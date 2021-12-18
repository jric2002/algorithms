# Presents
**Problem code**: 136A  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Little Petya very much likes gifts. Recently he has received a new laptop as a New Year gift from his mother. He immediately decided to give it to somebody else as what can be more pleasant than giving somebody gifts. And on this occasion he organized a New Year party at his place and invited `n` his friends there.

If there's one thing Petya likes more that receiving gifts, that's watching others giving gifts to somebody else. Thus, he safely hid the laptop until the next New Year and made up his mind to watch his friends exchanging gifts while he does not participate in the process. He numbered all his friends with integers from 1 to `n`. Petya remembered that a friend number `i` gave a gift to a friend number `pi`. He also remembered that each of his friends received exactly one gift.

Now Petya wants to know for each friend i the number of a friend who has given him a gift.

## Input
The first line contains one integer `n (1 ≤ n ≤ 100)` — the quantity of friends Petya invited to the party. The second line contains `n` space-separated integers: the i-th number is `pi` — the number of a friend who gave a gift to friend number `i`. It is guaranteed that each friend received exactly one gift. It is possible that some friends do not share Petya's ideas of giving gifts to somebody else. Those friends gave the gifts to themselves.

## Output
Print `n` space-separated integers: the i-th number should equal the number of the friend who gave a gift to friend number `i`.

## Examples
| input |
| :--- |
| 4 |
| 2 3 4 1 |

| output |
| :--- |
| 4 1 2 3 |

| input |
| :--- |
| 3 |
| 1 3 2 |

| output |
| :--- |
| 1 3 2 |

| input |
| :--- |
| 2 |
| 1 2 |

| output |
| :--- |
| 1 2 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, p;
  cin >> n;
  unsigned short int friends[n];
  for (unsigned short int i = 0; i < n; i++) {
    cin >> p;
    friends[p - 1] = (i + 1);
  }
  for (unsigned short i = 0; i < n; i++) {
    cout << friends[i] << " ";
  }
  cout << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
positions = list(map(int, input().split(" ")))
friends = [int(position) for position in positions]
for i in range(0, n):
  p = positions[i]
  friends[p - 1] = (i + 1)
for i in range(0, n):
  print(friends[i], end=" ")
```