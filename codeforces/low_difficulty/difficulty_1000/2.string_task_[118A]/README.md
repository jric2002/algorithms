# String Task
**Problem code**: 118A  
**Tags**: implementation, strings  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:
* deletes all the vowels,
* inserts a character "`.`" before each consonant,
*replaces all uppercase consonants with corresponding lowercase ones.

Vowels are letters "`A`", "`O`", "`Y`", "`E`", "`U`", "`I`", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

## Input
The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from `1` to `100`, inclusive.

## Output
Print the resulting string. It is guaranteed that this string is not empty.

## Examples
| input |
| :--- |
| tour |

| output |
| :--- |
| .t.r |

| input |
| :--- |
| Codeforces |

| output |
| :--- |
| .c.d.f.r.c.s |

| input |
| :--- |
| aBAcAba |

| output |
| :--- |
| .b.c.b |

## Solution
The solution in **C**:
```c
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  char vowels[] = {'a', 'o', 'y', 'e', 'u', 'i'};
  char s[100], o[201], ch;
  unsigned short int size_s, size_v = 6, pos;
  bool is_vowel;
  scanf("%s", &s);
  size_s = strlen(s);
  pos = 0;
  for (unsigned short int i = 0; i < size_s; i++) {
    ch = tolower(s[i]);
    is_vowel = false;
    for (unsigned short int j = 0; j < size_v; j++) {
      if (vowels[j] == ch) {
        is_vowel = true;
        break;
      }
    }
    if (!is_vowel) {
      o[pos] = '.';
      o[pos + 1] = ch;
      pos += 2;
    }
  }
  o[pos] = '\0';
  printf("%s", o);
  return 0;
}
```

The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  char vowels[] = {'a', 'o', 'y', 'e', 'u', 'i'};
  char ch;
  string s, o;
  unsigned short int size_s;
  bool is_vowel;
  cin >> s;
  size_s = s.size();
  o = "";
  for (unsigned short int i = 0; i < size_s; i++) {
    ch = tolower(s.at(i));
    is_vowel = false;
    for (char c : vowels) {
      if (c == ch) {
        is_vowel = true;
        break;
      }
    }
    if (!is_vowel) {
      o = o + '.' + ch;
    }
  }
  cout << o << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
s = str(input())
vowels = ['a', 'o', 'y', 'e', 'u', 'i']
o = ""
for ch in s:
  is_vowel = False
  ch = ch.lower()
  for v in vowels:
    if (v == ch):
      is_vowel = True
      break
  if (not(is_vowel)):
    o += '.' + ch
print(o)
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class StringTask {
  public static void main(String[] args) throws IOException {
    Character[] vowels = new Character[]{'a', 'o', 'y', 'e', 'u', 'i'};
    String s, o;
    Boolean is_vowel;
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    s = input.readLine();
    o = "";
    for (Short i = 0; i < s.length(); i++) {
      is_vowel = false;
      for (char v : vowels) {
        if (v == Character.toLowerCase(s.charAt(i))) {
          is_vowel = true;
          break;
        }
      }
      if (!is_vowel) {
        o += "." + Character.toLowerCase(s.charAt(i));
      }
    }
    System.out.println(o);
  }
}
```