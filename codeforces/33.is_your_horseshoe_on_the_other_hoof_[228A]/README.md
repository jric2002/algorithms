# Is your horseshoe on the other hoof?
**Problem code**: 228A  
**Tags**: implementation  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Valera the Horse is going to the party with friends. He has been following the fashion trends for a while, and he knows that it is very popular to wear all horseshoes of different color. Valera has got four horseshoes left from the last year, but maybe some of them have the same color. In this case he needs to go to the store and buy some few more horseshoes, not to lose face in front of his stylish comrades.

Fortunately, the store sells horseshoes of all colors under the sun and Valera has enough money to buy any four of them. However, in order to save the money, he would like to spend as little money as possible, so you need to help Valera and determine what is the minimum number of horseshoes he needs to buy to wear four horseshoes of different colors to a party.

## Input
The first line contains four space-separated integers **s1, s2, s3, s4 (1 ≤ s1, s2, s3, s4 ≤ 10<sup>9</sup>)** — the colors of horseshoes Valera has.

Consider all possible colors indexed with integers.

## Output
Print a single integer — the minimum number of horseshoes Valera needs to buy.

## Examples
| input |
| :--- |
| 1 7 3 3 |

| output |
| :--- |
| 1 |

| input |
| :--- |
| 7 7 7 7 |

| output |
| :--- |
| 3 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int number_horseshoes = 4;
  unsigned long int s[number_horseshoes];
  unsigned short int min_horseshoes = 0;
  bool status[number_horseshoes];
  for (unsigned short int i = 0; i < number_horseshoes; i++) {
    status[i] = true;
    cin >> s[i];
  }
  for (unsigned short int i = 0; i < number_horseshoes; i++) {
    if (status[i]) {
      for (unsigned short int j = (i + 1); j < number_horseshoes; j++) {
        if (s[i] == s[j]) {
          status[j] = false;
          min_horseshoes++;
        }
      }
    }
  }
  cout << min_horseshoes << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
s = list(map(int, input().split(" ")))
number_horseshoes = len(s)
min_horseshoes = 0
status = [True for i in range(0, number_horseshoes)]
for i in range(0, number_horseshoes):
  if (status[i]):
    for j in range((i + 1), number_horseshoes):
      if (s[i] == s[j]):
        status[j] = False
        min_horseshoes += 1
print(min_horseshoes)
```