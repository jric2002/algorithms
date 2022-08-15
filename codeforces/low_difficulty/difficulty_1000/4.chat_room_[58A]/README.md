# Chat room
**Problem code**: 58A  
**Tags**: greedy, strings  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word `s`. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "`hello`". For example, if Vasya types the word "`ahhellllloou`", it will be considered that he said hello, and if he types "`hlelo`", it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word `s`.

## Input
The first and only line contains the word `s`, which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

## Output
If Vasya managed to say hello, print "`YES`", otherwise print "`NO`".

## Examples
| input |
| :--- |
| ahhellllloou |

| output |
| :--- |
| YES |

| input |
| :--- |
| hlelo |

| output |
| :--- |
| NO |

## Solution
```c
#include <stdio.h>
#include <string.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  char word[] = {'h', 'e', 'l', 'l', 'o'};
  char s[100];
  scanf("%s", &s);
  unsigned short int size_s, size_w, p;
  size_s = strlen(s);
  size_w = sizeof(word)/sizeof(char);
  p = 0;
  for (unsigned short int i = 0; i < size_s; i++) {
    if (p < size_w) {
      if (s[i] == word[p]) {
        p++;
      }
    }
  }
  (p == size_w) ? printf("YES\n") : printf("NO\n");
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
  char word[] = {'h', 'e', 'l', 'l', 'o'};
  string s;
  unsigned short int size_s, size_w, p;
  cin >> s;
  size_s = s.size();
  size_w = sizeof(word)/sizeof(char);
  p = 0;
  for (unsigned short int i = 0; i < size_s; i++) {
    if (p < size_w) {
      if (s.at(i) == word[p]) {
        p++;
      }
    }
  }
  (p == size_w) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
word = ['h', 'e', 'l', 'l', 'o']
s = str(input())
size_s = len(s)
size_w = len(word)
p = 0
for i in range(0, size_s):
  if (p < size_w):
    if (s[i] == word[p]):
      p += 1
print("YES") if (p == size_w) else print("NO")
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class ChatRoom {
  public static void main(String[] args) throws IOException {
    Character[] word = new Character[]{'h', 'e', 'l', 'l', 'o'};
    String s;
    Integer size_s, size_w, p;
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    s = input.readLine();
    size_s = s.length();
    size_w = word.length;
    p = 0;
    for (Integer i = 0; i < size_s; i++) {
      if (p < size_w) {
        if (s.charAt(i) == word[p]) {
          p++;
        }
      }
    }
    System.out.println((p == size_w) ? "YES" : "NO");
  }
}
```