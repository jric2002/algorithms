# Do Not Be Distracted!
**Problem code**: 1520A  
**Tags**: brute force, implementation  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Polycarp has 26 tasks. Each task is designated by a capital letter of the Latin alphabet.

The teacher asked Polycarp to solve tasks in the following way: if Polycarp began to solve some task, then he must solve it to the end, without being distracted by another task. After switching to another task, Polycarp cannot return to the previous task.

Polycarp can only solve one task during the day. Every day he wrote down what task he solved. Now the teacher wants to know if Polycarp followed his advice.

For example, if Polycarp solved tasks in the following order: "`DDBBCCCBBEZ`", then the teacher will see that on the third day Polycarp began to solve the task '`B`', then on the fifth day he got distracted and began to solve the task '`C`', on the eighth day Polycarp returned to the task '`B`'. Other examples of when the teacher is suspicious: "`BAB`", "`AABBCCDDEEBZZ`" and "`AAAAZAAAAA`".

If Polycarp solved the tasks as follows: "`FFGZZZY`", then the teacher cannot have any suspicions. Please note that Polycarp is not obligated to solve all tasks. Other examples of when the teacher doesn't have any suspicious: "`BA`", "`AFFFCC`" and "`YYYYY`".

Help Polycarp find out if his teacher might be suspicious.

## Input
The first line contains an integer `t (1 ≤ t ≤ 1000)`. Then `t` test cases follow.

The first line of each test case contains one integer `n (1 ≤ n ≤ 50)` — the number of days during which Polycarp solved tasks.

The second line contains a string of length `n`, consisting of uppercase Latin letters, which is the order in which Polycarp solved the tasks.

## Output
For each test case output:
* "`YES`", if the teacher **cannot be suspicious**;
* "`NO`", otherwise.

You may print every letter in any case you want (so, for example, the strings `yEs`, `yes`, `Yes` and `YES` are all recognized as positive answer).

## Examples
| input |
| :--- |
| Copy |
| 5 |
| 3 |
| ABA |
| 11 |
| DDBBCCCBBEZ |
| 7 |
| FFGZZZY |
| 1 |
| Z |
| 2 |
| AB |

| output |
| :--- |
| NO |
| NO |
| YES |
| YES |
| YES |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n;
  string tasks, temp;
  char t_before;
  bool s;
  cin >> t;
  while (t--) {
    cin >> n;
    cin >> tasks;
    temp = "";
    t_before = '.';
    s = false;
    for (int i = 0; i < n; i++) {
      if (t_before != tasks[i]) {
        for (int j = 0; j < temp.size(); j++) {
          if (tasks[i] == temp.at(j)) {
            s = true;
            break;
          }
        }
        if (!s) {
          temp += tasks[i];
          t_before = tasks[i];
        }
        else {
          break;
        }
      }
    }
    if (s) {
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
    }
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  tasks = str(input())
  temp = ""
  t_before = "."
  s = False
  for i in range(0, n):
    if (t_before != tasks[i]):
      for j in range(0, len(temp)):
        if (tasks[i] == temp[j]):
          s = True
          break
      if (not(s)):
        temp += tasks[i]
        t_before = tasks[i]
      else:
        break
  if (s):
    print("NO")
  else:
    print("YES")
  t -= 1
```