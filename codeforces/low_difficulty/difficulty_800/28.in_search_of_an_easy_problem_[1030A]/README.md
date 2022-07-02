# In Search of an Easy Problem
**Problem code**: 1030A  
**Tags**: implementation  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. This time the coordinator had chosen some problem and asked `n` people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these `n` people has answered that the problem is hard, the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.

## Input
The first line contains a single integer `n (1 ≤ n ≤ 100)` — the number of people who were asked to give their opinions.

The second line contains `n` integers, each integer is either `0` or `1`. If i-th integer is `0`, then i-th person thinks that the problem is easy; if it is `1`, then i-th person thinks that the problem is hard.

## Output
Print one word: "`EASY`" if the problem is easy according to all responses, or "`HARD`" if there is at least one person who thinks the problem is hard.

You may print every letter in any register: "`EASY`", "`easy`", "`EaSY`" and "`eAsY`" all will be processed correctly.

## Examples
| input |
| :--- |
| 3 |
| 0 0 1 |

| output |
| :--- |
| HARD |

| input |
| :--- |
| 1 |
| 0 |

| output |
| :--- |
| EASY |

## Note
In the first example the third person says it's a hard problem, so it should be replaced.

In the second example the problem easy for the only person, so it doesn't have to be replaced.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo */
using namespace std;
int main() {
  unsigned short int n;
  char opinion;
  bool is_easy = true;
  cin >> n;
  while (n--) {
    cin >> opinion;
    if (opinion == '1') {
      is_easy = false;
    }
  }
  if (is_easy) {
    cout << "EASY" << endl;
  }
  else {
    cout << "HARD" << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
is_easy = True
opinions = input().split(" ")
for position in range(0, n):
  if (opinions[position] == '1'):
    is_easy = False
print("EASY") if (is_easy) else print("HARD")
```