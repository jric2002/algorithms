# Petya and Strings
**Problem code**: 112A  
**Tags**: implementation, strings  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings **lexicographically**. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

## Input
Each of the first two lines contains a bought string. The strings' lengths range from `1` to `100` inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

## Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

## Examples
| input |
| :--- |
| aaaa |
| aaaA |

| output |
| :--- |
| 0 |

| input |
| :--- |
| abs |
| Abz |

| output |
| :--- |
| -1 |

| input |
| :--- |
| abcdefg |
| AbCdEfF |

| output |
| :--- |
| 1 |

## Note
If you want more formal information about the lexicographical order (also known as the "**dictionary order**" or "**alphabetical order**"), you can visit the following site:
* <http://en.wikipedia.org/wiki/Lexicographical_order>

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string string_one, string_two;
  cin >> string_one >> string_two;
  for (unsigned short int position = 0; position < string_one.size(); position++) {
    string_one[position] = tolower(string_one[position]);
  }
  for (unsigned short int position = 0; position < string_one.size(); position++) {
    string_two[position] = tolower(string_two[position]);
  }
  if (string_one < string_two) {
    cout << -1 << endl;
  }
  else if (string_one > string_two) {
    cout << 1 << endl;
  }
  else {
    cout << 0 << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
string_one = (str(input())).lower()
string_two = str(input()).lower()
if (string_one < string_two):
  print(-1)
elif (string_one > string_two):
  print(1)
else:
  print(0)
```