# Soldier and Bananas
**Problem code**: 546A  
**Tags**: brute force, implementation, math  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

A soldier wants to buy `w` bananas in the shop. He has to pay `k` dollars for the first banana, `2k` dollars for the second one and so on (in other words, he has to pay `i·k` dollars for the i-th banana).

He has `n` dollars. How many dollars does he have to borrow from his friend soldier to buy `w` bananas?

## Input
The first line contains three positive integers `k`, `n`, `w (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 10^9)`, the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.

## Output
Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output `0`.

## Examples
| input |
| :--- |
| 3 17 4 |

| output |
| :--- |
| 13 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int k, n, w;
  signed int borrowed_money = 0;
  cin >> k >> n >> w;
  borrowed_money = (k * ((w * (w + 1)) / 2)) - n;
  borrowed_money = (borrowed_money > 0) ? borrowed_money : 0;
  cout << borrowed_money << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
input_data = input().split(" ")
k = int(input_data[0])
n = int(input_data[1])
w = int(input_data[2])
borrowed_money = int((k * ((w * (w + 1)) / 2)) - n)
borrowed_money = borrowed_money if (borrowed_money > 0) else 0
print(borrowed_money)
```