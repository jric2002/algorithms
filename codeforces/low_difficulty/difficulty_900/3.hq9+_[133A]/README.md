# HQ9+
**Problem code**: 133A  
**Tags**: implementation  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

HQ9+ is a joke programming language which has only four one-character instructions:
* "`H`" prints "`Hello, World!`",
* "`Q`" prints the source code of the program itself,
* "`9`" prints the lyrics of "`99 Bottles of Beer`" song,
* "`+`" increments the value stored in the internal accumulator.

Instructions "`H`" and "`Q`" are case-sensitive and must be uppercase. The characters of the program which are not instructions are ignored.

You are given a program written in HQ9+. You have to figure out whether executing this program will produce any output.

## Input
The input will consist of a single line `p` which will give a program in HQ9+. String `p` will contain between 1 and 100 characters, inclusive. ASCII-code of each character of `p` will be between 33 (exclamation mark) and 126 (tilde), inclusive.

## Output
Output "`YES`", if executing the program will produce any output, and "`NO`" otherwise.

## Examples
| input |
| :--- |
| Hi! |

| output |
| :--- |
| YES |

| input |
| :--- |
| Codeforces |

| output |
| :--- |
| NO |

## Note
In the first case the program contains only one instruction — "`H`", which prints "`Hello, World!`".

In the second case none of the program characters are language instructions.

## Solution
The solution in **C**:
```c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  char kw[4] = {'H', 'Q', '9', '+'};
  char p[100];
  unsigned short int size_p, size_kw;
  bool output;
  scanf("%s", &p);
  size_p = strlen(p);
  size_kw = sizeof(kw)/sizeof(char);
  output = false;
  for (unsigned short int i = 0; i < size_p && !output; i++) {
    for (unsigned short int j = 0; j < (size_kw - 1); j++) {
      if (p[i] == kw[j]) {
        output = true;
        break;
      }
    }
  }
  (output) ? printf("YES\n") : printf("NO\n");
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
  char kw[4] = {'H', 'Q', '9', '+'};
  string p;
  unsigned short int size_p, size_kw;
  bool output;
  cin >> p;
  size_p = p.size();
  size_kw = sizeof(kw)/sizeof(char);
  output = false;
  for (unsigned short int i = 0; i < size_p && !output; i++) {
    for (unsigned short int j = 0; j < (size_kw - 1); j++) {
      if (kw[j] == p.at(i)) {
        output = true;
        break;
      }
    }
  }
  (output) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
kw = ['H', 'Q', '9', '+']
p = str(input())
size_p = len(p)
size_kw = len(kw)
output = False
i = 0
while (i < size_p and not(output)):
  for j in range(0, (size_kw - 1)):
    if (p[i] == kw[j]):
      output = True
      break
  i += 1
print("YES") if (output) else print("NO")
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class App {
  public static void main(String[] args) throws IOException {
    Character[] kw = new Character[]{'H', 'Q', '9', '+'};
    String p;
    Short size_p, size_kw;
    Boolean output = false;
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    p = input.readLine();
    size_p = (Integer.valueOf(p.length())).shortValue();
    size_kw = (Integer.valueOf(kw.length)).shortValue();
    for (Short i = 0; i < size_p && !output; i++) {
      for (Short j = 0; j < (size_kw - 1); j++) {
        if (p.charAt(i) == kw[j]) {
          output = true;
          break;
        }
      }
    }
    System.out.println((output) ? "YES" : "NO");
  }
}
```