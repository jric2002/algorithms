# Translation
**Problem code**: 41A  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, a Berlandish word `code` corresponds to a Birlandish word `edoc`. However, it's easy to make a mistake during the «translation». Vasya translated word `s` from Berlandish into Birlandish as `t`. Help him: find out if he translated the word correctly.

## Input
The first line contains word `s`, the second line contains word `t`. The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

## Output
If the word `t` is a word `s`, written reversely, print `YES`, otherwise print `NO`.

## Examples
| input |
| :--- |
| code |
| edoc |

| output |
| :--- |
| YES |

| input |
| :--- |
| abb |
| aba |

| output |
| :--- |
| NO |

| input |
| :--- |
| code |
| code |

| output |
| :--- |
| NO |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string s, t;
  unsigned short int size_s, number_equal_char = 0;
  bool is_correct = true;
  cin >> s;
  cin >> t;
  size_s = s.size();
  if (size_s == t.size()) {
    for (unsigned short int i = 0, j = size_s - 1; i < size_s; i++, j--) {
      if (s[i] != t[j]) {
        is_correct = false;
        break;
      }
    }
  }
  else {
    is_correct = false;
  }
  if (is_correct) {
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
s = str(input())
t = str(input())
is_correct = True
size_s = len(s)
size_t = len(t)
i = 0
j = size_s - 1
if (size_s == size_t):
  while (i < size_s):
    if (s[i] != t[j]):
      is_correct = False
      break
    i += 1
    j -= 1
else:
  is_correct = False
print("YES") if (is_correct) else print("NO")
```