# Borze
**Problem code**: 32B  
**Tags**: expression parsing, implementation  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit `0` is transmitted as «`.`», `1` as «`-.`» and `2` as «`--`». You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

## Input
The first line contains a number in Borze code. The length of the string is between `1` and `200` characters. It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

## Output
Output the decoded ternary number. It can have leading zeroes.

## Examples
| input |
| :--- |
| .-.-- |

| output |
| :--- |
| 012 |

| input |
| :--- |
| --. |

| output |
| :--- |
| 20 |

| input |
| :--- |
| -..-.-- |

| output |
| :--- |
| 1012 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string borze_code, decoded_ternary_number;
  unsigned short int size_borze_code;
  cin >> borze_code;
  size_borze_code = borze_code.size();
  decoded_ternary_number = "";
  for (unsigned short int i = 0; i < size_borze_code; i++) {
    if (borze_code.at(i) == '.') {
      decoded_ternary_number += '0';
      continue;
    }
    if (borze_code.at(i) == '-' && borze_code.at(i + 1) == '.') {
      decoded_ternary_number += '1';
      i++;
      continue;
    }
    if (borze_code.at(i) == '-' && borze_code.at(i + 1) == '-') {
      decoded_ternary_number += '2';
      i++;
      continue;
    }
  }
  cout << decoded_ternary_number << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
borze_code = str(input())
size_borze_code = len(borze_code)
i = 0
decoded_ternary_number = ""
while (i < size_borze_code):
  if (borze_code[i] == '.'):
    decoded_ternary_number += '0'
    i += 1
    continue
  if (borze_code[i] == '-' and borze_code[i + 1] == '.'):
    decoded_ternary_number += '1'
    i += 2
    continue
  if (borze_code[i] == '-' and borze_code[i + 1] == '-'):
    decoded_ternary_number += '2'
    i += 2
    continue
print(decoded_ternary_number)
```