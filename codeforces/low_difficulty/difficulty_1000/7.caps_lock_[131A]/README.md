# cAPS LOCK
**Problem code**: 131A  
**Tags**: implementation, strings  
**Time limit per test**: 0.5 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

wHAT DO WE NEED cAPS LOCK FOR?

Caps lock is a computer keyboard key. Pressing it sets an input mode in which typed letters are capital by default. If it is pressed by accident, it leads to accidents like the one we had in the first passage.

Let's consider that a word has been typed with the Caps lock key accidentally switched on, if:

* either it only contains uppercase letters;
* or all letters except for the first one are uppercase.

In this case we should automatically change the case of all letters. For example, the case of the letters that form words "`hELLO`", "`HTTP`", "`z`" should be changed.

Write a program that applies the rule mentioned above. If the rule cannot be applied, the program should leave the word unchanged.

## Input
The first line of the input data contains a word consisting of uppercase and lowercase Latin letters. The word's length is from 1 to 100 characters, inclusive.

## Output
Print the result of the given word's processing.

## Examples
| input |
| :--- |
| cAPS |

| output |
| :--- |
| Caps |

| input |
| :--- |
| Lock |

| output |
| :--- |
| Lock |

## Solution
```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  char w[101], nw[101];
  unsigned short int size_w, i;
  bool s;
  scanf("%s", &w);
  size_w = strlen(w);
  w[size_w] = '\0';
  s = true;
  nw[0] = ((islower(w[0])) ? (char)toupper(w[0]) : (char)tolower(w[0]));
  i = 1;
  while (i < size_w) {
    if (!isupper(w[i])) {
      s = false;
      break;
    }
    nw[i] = (char)tolower(w[i]);
    i++;
  }
  nw[i] = '\0';
  if (s) {
    printf("%s\n", nw);
  }
  else {
    printf("%s\n", w);
  }
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
  string w, nw;
  unsigned short int size_w;
  bool s;
  cin >> w;
  size_w = w.size();
  nw = "";
  s = true;
  nw = nw + ((islower(w[0])) ? (char)toupper(w[0]) : (char)tolower(w[0]));
  for (unsigned short int i = 1; i < size_w; i++) {
    if (!isupper(w[i])) {
      s = false;
      break;
    }
    nw = nw + (char)tolower(w[i]);
  }
  if (s) {
    cout << nw << endl;
  }
  else {
    cout << w << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
w = str(input())
size_w = len(w)
s = True
nw = ""
nw = nw + (w[0].upper() if (w[0].islower()) else w[0].lower())
i = 1
while (i < size_w):
  if (not(w[i].isupper())):
    s = False
    break
  nw = nw + w[i].lower()
  i += 1
print(nw) if (s) else print(w)
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
public class CapsLock {
  public static void main(String[] args) {
    String w, nw;
    int size_w, i;
    boolean s;
    Scanner input = new Scanner(System.in);
    w = input.next();
    size_w = w.length();
    s = true;
    nw = (Character.isLowerCase(w.charAt(0))) ? Character.toString(Character.toUpperCase(w.charAt(0))) : Character.toString(Character.toLowerCase(w.charAt(0)));
    i = 1;
    while (i < size_w) {
      if (!(Character.isUpperCase(w.charAt(i)))) {
        s = false;
        break;
      }
      nw = nw + Character.toString(Character.toLowerCase(w.charAt(i)));
      i++;
    }
    System.out.println((s) ? nw : w);
  }
}
```