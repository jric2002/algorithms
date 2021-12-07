# Boy or Girl
**Problem code**: 236A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

## Input
The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

## Output
If it is a female by our hero's method, print "`CHAT WITH HER!`" (without the quotes), otherwise, print "`IGNORE HIM!`" (without the quotes).

## Examples
| input |
| :--- |
| wjmzbmr |

| output |
| :--- |
| CHAT WITH HER! |

| input |
| :--- |
| xiaodao |

| output |
| :--- |
| IGNORE HIM! |

| input |
| :--- |
| sevenkplus |

| output |
| :--- |
| CHAT WITH HER! |

## Note
For the first example. There are 6 distinct characters in "wjmzbmr". These characters are: "w", "j", "m", "z", "b", "r". So wjmzbmr is a female and you should print "`CHAT WITH HER!`".

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string username;
  char character;
  unsigned short int number_of_characters, repeated_characters = 0;
  string gender, message;
  cin >> username;
  number_of_characters = username.size();
  for (unsigned short int position = 0; position < number_of_characters; position++) {
    character = username[position];
    for (unsigned short int i = (position + 1); i < number_of_characters; i++) {
      if (character == username[i]) {
        repeated_characters++;
        break;
      }
    }
  }
  gender = (((number_of_characters - repeated_characters) % 2) != 0) ? "male" : "female";
  message = (gender == "female") ? "CHAT WITH HER!" : "IGNORE HIM!";
  cout << message << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
username = str(input())
number_of_characters = len(username)
repeated_characters = 0
for position in range(0, number_of_characters):
  character = username[position]
  for i in range(position + 1, number_of_characters):
    if (character == username[i]):
      repeated_characters += 1
      break
gender = "male" if (((number_of_characters - repeated_characters) % 2) != 0) else "female"
message = "CHAT WITH HER!" if (gender == "female") else "IGNORE HIM!"
print(message)
```