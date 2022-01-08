# Insomnia cure
**Problem code**: 148A  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

«One dragon. Two dragon. Three dragon», — the princess was counting. She had trouble falling asleep, and she got bored of counting lambs when she was nine.

However, just counting dragons was boring as well, so she entertained herself at best she could. Tonight she imagined that all dragons were here to steal her, and she was fighting them off. Every `k-th` dragon got punched in the face with a frying pan. Every `l-th` dragon got his tail shut into the balcony door. Every `m-th` dragon got his paws trampled with sharp heels. Finally, she threatened every `n-th` dragon to call her mom, and he withdrew in panic.

How many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of `d` dragons?

## Input
Input data contains integer numbers `k`, `l`, `m`, `n` and `d`, each number in a separate line **(1 ≤ k, l, m, n ≤ 10, 1 ≤ d ≤ 10<sup>5</sup>)**.

## Output
Output the number of damaged dragons.

## Examples
| input |
| :--- |
| 1 |
| 2 |
| 3 |
| 4 |
| 12 |

| output |
| :--- |
| 12 |

| input |
| :--- |
| 2 |
| 3 |
| 4 |
| 5 |
| 24 |

| output |
| :--- |
| 17 |

# Note
In the first case every first dragon got punched with a frying pan. Some of the dragons suffered from other reasons as well, but the pan alone would be enough.

In the second case dragons 1, 7, 11, 13, 17, 19 and 23 escaped unharmed.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int k, l, m, n;
  int d, damaged_dragons;
  cin >> k;
  cin >> l;
  cin >> m;
  cin >> n;
  cin >> d;
  damaged_dragons = d;
  for (int i = 1; i <= d; i++) {
    if ((i % k) && (i % l) && (i % m) && (i % n)) {
      damaged_dragons -= 1;
    }
  }
  cout << damaged_dragons << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
k = int(input())
l = int(input())
m = int(input())
n = int(input())
d = int(input())
damaged_dragons = d
for i in range(1, (d + 1)):
  if ((i % k) and (i % l) and (i % m) and (i % n)):
    damaged_dragons -= 1
print(damaged_dragons)
```