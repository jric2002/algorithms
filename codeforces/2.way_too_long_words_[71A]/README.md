# Way Too Long Words
**Problem code**: 71A  
**Tags**: strings  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Sometimes some words like "`localization`" or "`internationalization`" are so long that writing them many times in one text is quite tiresome.

Let's consider a word too long, if its length is **strictly more** than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "`localization`" will be spelt as "`l10n`", and "`internationalization`" will be spelt as "`i18n`".

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.

## Input
The first line contains an integer `n (1 ≤ n ≤ 100)`. Each of the following `n` lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.

## Output
Print `n` lines. The i-th line should contain the result of replacing of the i-th word from the input data.

## Examples
| input |
| :--- |
| 4 |
| word |
| localization |
| internationalization |
| pneumonoultramicroscopicsilicovolcanoconiosis |

| output |
| :--- |
| word |
| l10n |
| i18n |
| p43s |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <string>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  unsigned short int num_char;
  cin >> n;
  if (n >= 1 && n <= 100) {
    string word;
    for (unsigned short int i = 0; i < n; i++) {
      cin >> word;
      num_char = word.size();
      if (num_char > 10) {
        cout << word.at(0) << (num_char - 2) << word.at(num_char - 1) << endl;
      }
      else {
        cout << word << endl;
      }
    }
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
if (n >= 1 and n <= 100):
  for i in range(0, n):
    word = str(input())
    num_char = len(word)
    if (num_char > 10):
      print(word[0], (num_char - 2), word[-1], sep='')
    else:
      print(word)
```