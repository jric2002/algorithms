# Anton and Letters
**Problem code**: 443A  
**Tags**: constructive algorithms, implementation  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Recently, Anton has found a set. The set consists of small English letters. Anton carefully wrote out all the letters from the set in one line, separated by a comma. He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

Unfortunately, from time to time Anton would forget writing some letter and write it again. He asks you to count the total number of distinct letters in his set.

## Input
The first and the single line contains the set of letters. The length of the line doesn't exceed 1000. It is guaranteed that the line starts from an opening curved bracket and ends with a closing curved bracket. Between them, small English letters are listed, separated by a comma. Each comma is followed by a space.

## Output
Print a single number — the number of distinct letters in Anton's set.

## Examples
| input |
| :--- |
| {a, b, c} |

| output |
| :--- |
| 3 |

| input |
| :--- |
| {b, a, b, a} |

| output |
| :--- |
| 2 |

| input |
| :--- |
| {} |

| output |
| :--- |
| 0 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string letters, different_letters = "";
  char letter;
  bool exist;
  unsigned short int size_letters, letter_position;
  getline(cin, letters);
  size_letters = letters.size();
  if (size_letters > 2) {
    for (unsigned short int i = 1; i < size_letters; i += 3) {
      letter = letters[i];
      letter_position = 0;
      exist = false;
      while (letter_position < different_letters.size()) {
        if (letter == different_letters[letter_position]) {
          exist = true;
          break;
        }
        letter_position += 1;
      }
      if (!exist) {
        different_letters += letter;
      }
    }
  }
  cout << different_letters.size() << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
letters = str(input())
letters = letters[1:(len(letters) - 1)]
letters = letters.split(", ")
different_letters = []
if (letters[0] == ""):
  letters = []
for letter in letters:
  if letter not in different_letters:
    different_letters.append(letter)
print(len(different_letters))
```