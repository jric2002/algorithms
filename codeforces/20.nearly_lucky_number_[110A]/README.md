# Nearly Lucky Number
**Problem code**: 110A  
**Tags**: implementation  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits `4` and `7`. For example, numbers `47`, `744`, `4` are lucky and `5`, `17`, `467` are not.

Unfortunately, not all numbers are lucky. Petya calls a number **nearly lucky** if the number of lucky digits in it is a lucky number. He wonders whether number `n` is a nearly lucky number.

## Input
The only line contains an integer `n (1 ≤ n ≤ 1018)`.

Please do not use the **%lld** specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the **%I64d** specificator.

## Output
Print on the single line "`YES`" if `n` is a nearly lucky number. Otherwise, print "`NO`" (without the quotes).

## Examples
| input |
| :--- |
| 40047 |

| output |
| :--- |
| NO |

| input |
| :--- |
| 7747774 |

| output |
| :--- |
| YES |

| input |
| :--- |
| 1000000000000000000 |

| output |
| :--- |
| NO |

## Note
In the first sample there are 3 lucky digits (first one and last two), so the answer is "`NO`".

In the second sample there are 7 lucky digits, 7 is lucky number, so the answer is "`YES`".

In the third sample there are no lucky digits, so the answer is "`NO`".

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo */
using namespace std;
int main() {
  string n;
  unsigned int quantity_numbers = 0;
  cin >> n;
  unsigned short int size_n = n.size();
  for (unsigned short position = 0; position < size_n; position++) {
    if (n[position] == '4' || n[position] == '7') {
      quantity_numbers++;
    }
  }
  if (quantity_numbers == 4 || quantity_numbers == 7) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = str(input())
quantity_numbers = 0
for position in range(0, len(n)):
  if (n[position] == '4' or n[position] == '7'):
    quantity_numbers += 1
if (quantity_numbers == 4 or quantity_numbers == 7):
  print("YES")
else:
  print("NO")
```