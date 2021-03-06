# Word
**Problem code**: 59A  
**Tags**: implementation, strings  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word `HoUse` must be replaced with `house`, and the word `ViP` — with `VIP`. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, `maTRIx` should be replaced by `matrix`. Your task is to use the given method on one given word.

## Input
The first line contains a word `s` — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

## Output
Print the corrected word `s`. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.

## Examples
| input |
| :--- |
| HoUse |

| output |
| :--- |
| house |

| input |
| :--- |
| ViP |

| output |
| :--- |
| VIP |

| input |
| :--- |
| maTRIx |

| output |
| :--- |
| matrix |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string s;
  unsigned short int number_lowercase_letters = 0, number_uppercase_letters = 0;
  cin >> s;
  for (unsigned short int position = 0; position < s.size(); position++) {
    if (islower(s[position])) {
      number_lowercase_letters++;
    }
    else {
      number_uppercase_letters++;
    }
  }
  if (number_lowercase_letters >= number_uppercase_letters) {
    for (unsigned short int position = 0; position < s.size(); position++) {
      s[position] = tolower(s[position]);
    }
  }
  else {
    for (unsigned short int position = 0; position < s.size(); position++) {
      s[position] = toupper(s[position]);
    }
  }
  cout << s << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
s = str(input())
number_lowercase_letters = 0
number_uppercase_letters = 0
for position in range(0, len(s)):
  if (s[position].islower()):
    number_lowercase_letters += 1
  else:
    number_uppercase_letters += 1
if (number_lowercase_letters >= number_uppercase_letters):
  s = s.lower()
else:
  s = s.upper()
print(s)
```