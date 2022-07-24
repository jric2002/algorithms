# Football
**Problem code**: 96A  
**Tags**: implementation, strings  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least 7 players of some team standing one after another, then the situation is considered dangerous. For example, the situation 00100110111111101 is dangerous and 11110111011101 is not. You are given the current situation. Determine whether it is dangerous or not.

## Input
The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.

## Output
Print "`YES`" if the situation is dangerous. Otherwise, print "`NO`".

## Examples
| input |
| :--- |
| 001001 |

| output |
| :--- |
| NO |

| input |
| :--- |
| 1000000001 |

| output |
| :--- |
| YES |

## Solution
The solution in **C**:
```c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  char p[100], sub_p[8];
  unsigned short int size_p;
  bool dangerous;
  scanf("%s", &p);
  size_p = strlen(p);
  dangerous = false;
  if (size_p >= 7) {
    for (unsigned short int i = 0; i < (size_p - 7 + 1); i++) {
      strncpy(sub_p, &p[i], 7);
      sub_p[7] = '\0';
      if (strcmp(sub_p, "0000000") == 0 || strcmp(sub_p, "1111111") == 0) {
        dangerous = true;
        break;
      }
    }
  }
  (dangerous) ? printf("YES\n") : printf("NO\n");
  return 0;
}
```

The solution in **C++**:
```cpp
#include <iostream>
#include <string>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string p, sub_p;
  unsigned short int size_p;
  bool dangerous;
  cin >> p;
  size_p = p.size();
  dangerous = false;
  if (size_p >= 7) {
    for (unsigned short int i = 0; i < (size_p - 7 + 1); i++) {
      sub_p = p.substr(i, 7);
      if (sub_p == "0000000" || sub_p == "1111111") {
        dangerous = true;
        break;
      }
    }
  }
  (dangerous) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
p = str(input())
size_p = len(p)
dangerous = False
if (size_p >= 7):
  for i in range(0, (size_p - 7 + 1)):
    sub_p = p[i:(i + 7)]
    if (sub_p == "0000000" or sub_p == "1111111"):
      dangerous = True
      break
print("YES") if (dangerous) else print("NO")
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
public class Football {
  public static void main(String[] args) {
    String p, sub_p;
    int size_p;
    boolean dangerous;
    Scanner input = new Scanner(System.in);
    p = input.next();
    size_p = p.length();
    dangerous = false;
    if (size_p >= 7) {
      for (int i = 0; i < (size_p - 7 + 1); i++) {
        sub_p = p.substring(i, i + 7);
        if (sub_p.equals("0000000") || sub_p.equals("1111111")) {
          dangerous = true;
          break;
        }
      }
    }
    System.out.println((dangerous) ? "YES" : "NO");
  }
}
```