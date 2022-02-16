# Hit the Lottery
**Problem code**: 996A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Allen has a LOT of money. He has `n` dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are `1`, `5`, `10`, `20`, `100`. What is the minimum number of bills Allen could receive after withdrawing his entire balance?

## Input
The first and only line of input contains a single integer **n (1 ≤ n ≤ 10<sup>9</sup>)**.

## Output
Output the minimum number of bills that Allen could receive.

## Examples
| input |
| :--- |
| 125 |

| output |
| :--- |
| 3 |

| input |
| :--- |
| 43 |

| output |
| :--- |
| 5 |

| input |
| :--- |
| 1000000000 |

| output |
| :--- |
| 10000000 |

## Note
In the first sample case, Allen can withdraw this with a `100` dollar bill, a `20` dollar bill, and a `5` dollar bill. There is no way for Allen to receive `125` dollars in one or two bills.

In the second sample case, Allen can withdraw two `20` dollar bills and three `1` dollar bills.

In the third sample case, Allen can withdraw `100000000` (ten million!) `100` dollar bills.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned long int n, min_num_bills = 0;
  unsigned short int dollars[5] = {1, 5, 10, 20, 100};
  cin >> n;
  while (n != 0) {
    for (short int i = (sizeof(dollars)/sizeof(unsigned short int) - 1); i >= 0; i--) {
      if (n >= dollars[i]) {
        min_num_bills += (n / dollars[i]);
        n = (n % dollars[i]);
      }
    }
  }
  cout << min_num_bills << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
import math
n = int(input())
min_num_bills = 0
dollars = [1, 5, 10, 20, 100]
num_bills = len(dollars)
while (n != 0):
  i = num_bills - 1
  while (i >= 0):
    if (n >= dollars[i]):
      min_num_bills += math.floor(n / dollars[i])
      n = (n % dollars[i])
    i -= 1
print(min_num_bills)
```