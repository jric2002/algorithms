# Amusing Joke
**Problem code**: 141A  
**Tags**: implementation, sortings, strings  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

So, the New Year holidays are over. Santa Claus and his colleagues can take a rest and have guests at last. When two "New Year and Christmas Men" meet, thear assistants cut out of cardboard the letters from the guest's name and the host's name in honor of this event. Then the hung the letters above the main entrance. One night, when everyone went to bed, someone took all the letters of our characters' names. Then he may have shuffled the letters and put them in one pile in front of the door.

The next morning it was impossible to find the culprit who had made the disorder. But everybody wondered whether it is possible to restore the names of the host and his guests from the letters lying at the door? That is, we need to verify that there are no extra letters, and that nobody will need to cut more letters.

Help the "New Year and Christmas Men" and their friends to cope with this problem. You are given both inscriptions that hung over the front door the previous night, and a pile of letters that were found at the front door next morning.

## Input
The input file consists of three lines: the first line contains the guest's name, the second line contains the name of the residence host and the third line contains letters in a pile that were found at the door in the morning. All lines are not empty and contain only uppercase Latin letters. The length of each line does not exceed `100`.

## Output
Print "`YES`" without the quotes, if the letters in the pile could be permuted to make the names of the "New Year and Christmas Men". Otherwise, print "`NO`" without the quotes.

## Examples
| input |
| :--- |
| SANTACLAUS |
| DEDMOROZ |
| SANTAMOROZDEDCLAUS |

| output |
| :--- |
| YES |

| input |
| :--- |
| PAPAINOEL |
| JOULUPUKKI |
| JOULNAPAOILELUPUKKI |

| output |
| :--- |
| NO |

| input |
| :--- |
| BABBONATALE |
| FATHERCHRISTMAS |
| BABCHRISTMASBONATALLEFATHER |

| output |
| :--- |
| NO |

## Note
In the first sample the letters written in the last line can be used to write the names and there won't be any extra letters left.

In the second sample letter "`P`" is missing from the pile and there's an extra letter "`L`".

In the third sample there's an extra letter "`L`".

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string name_guest, name_host, text, letters;
  bool exist;
  cin >> name_guest;
  cin >> name_host;
  cin >> letters;
  text = name_guest + name_host;
  for (unsigned short int i = 0; i < text.size() && !letters.empty(); i++) {
    unsigned short int j = 0;
    exist = false;
    while (j < letters.size() && !letters.empty()) {
      if (text[i] == letters[j]) {
        exist = true;
        letters.erase(j, 1);
        break;
      }
      j++;
    }
    if (!exist) {
      break;
    }
  }
  if (letters.empty() && exist) {
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
name_guest = str(input())
name_host = str(input())
letters = []
letters[:0] = str(input())
text = name_guest + name_host
for i in range(0, len(text)):
  exist = False
  for j in range(0, len(letters)):
    if (text[i] == letters[j]):
      letters.pop(j)
      exist = True
      break
  if (exist != True):
    break
if ((len(letters) == 0) and exist):
  print("YES")
else:
  print("NO")
```