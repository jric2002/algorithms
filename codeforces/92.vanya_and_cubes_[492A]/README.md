# Vanya and Cubes
**Problem code**: 492A  
**Tags**: implementation  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Vanya got `n` cubes. He decided to build a pyramid from them. Vanya wants to build the pyramid as follows: the top level of the pyramid must consist of `1` cube, the second level must consist of `1 + 2 = 3` cubes, the third level must have `1 + 2 + 3 = 6` cubes, and so on. Thus, the i-th level of the pyramid must have `1 + 2 + ... + (i - 1) + i` cubes.

Vanya wants to know what is the maximum height of the pyramid that he can make using the given cubes.

## Input
The first line contains integer **n (1 ≤ n ≤ 10<sup>4</sup>)** — the number of cubes given to Vanya.

## Output
Print the maximum possible height of the pyramid in the single line.

## Examples
| input |
| :--- |
| 1 |

| output |
| :--- |
| 1 |

| input |
| :--- |
| 25 |

| output |
| :--- |
| 4 |

## Note
Illustration to the second sample:

![Vanya and Cubes - Example 1](./vanya-and-cubes-example-1.png)

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  short int n;
  unsigned short int h, i;
  cin >> n;
  h = 0;
  for (unsigned short int i = 1; n >= 0; i++) {
    n = n - ((i * (i + 1) / 2));
    if (n >= 0) {
      h++;
    }
  }
  cout << h << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
h = 0
i = 1
while (n >= 0):
  n = n - int((i * (i + 1)) / 2)
  if (n >= 0):
    h += 1
  i += 1
print(h)
```