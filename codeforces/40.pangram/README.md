# Pangram
**Problem code**: 520A  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the output devices.

You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

## Input
The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

The second line contains the string. The string consists only of uppercase and lowercase Latin letters.

## Output
Output "YES", if the string is a pangram and "NO" otherwise.

## Examples
| input |
| :--- |
| 12 |
| toosmallword |

| output |
| :--- |
| NO |

| input |
| :--- |
| 35 |
| TheQuickBrownFoxJumpsOverTheLazyDog |

| output |
| :--- |
| YES |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  bool is_pangram;
  cin >> n;
  cin.ignore();
  char text[n + 1];
  cin.getline(text, n + 1);
  for (char lowercase_char = 'a', uppercase_char = 'A'; lowercase_char <= 'z' && uppercase_char <= 'Z'; lowercase_char += 1, uppercase_char += 1) {
    is_pangram = false;
    for (unsigned short int position = 0; position < n; position++) {
      if (lowercase_char == text[position] || uppercase_char == text[position]) {
        is_pangram = true;
        break;
      }
    }
    if (!is_pangram) {
      break;
    }
  }
  if (is_pangram) {
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
n = int(input())
text = str(input())
is_pangram = False
alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
for character in alphabet:
  is_pangram = False
  for position in range(0, n):
    if (character == text[position] or character.upper() == text[position]):
      is_pangram = True
      break
  if (is_pangram != True):
    break
if (is_pangram):
  print("YES")
else:
  print("NO")
```