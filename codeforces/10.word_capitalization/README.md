# Word Capitalization
**Problem code**: 281A  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

## Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed `10^3`.

## Output
Output the given word after capitalization.

## Examples
| input |
| :--- |
| ApPLe |

| output |
| :--- |
| ApPLe |

| input |
| :--- |
| konjac |

| output |
| :--- |
| Konjac |

| input |
| :--- |
| grAPe |

| output |
| :--- |
| GrAPe |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string word;
  cin >> word;
  word[0] = toupper(word[0]);
  cout << word << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
word = str(input())
word = word[0].upper() + word[1:]
print(word)
```