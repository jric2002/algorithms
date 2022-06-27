# Add Odd or Subtract Even
**Problem code**: 1311A  
**Tags**: greedy, implementation, math  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

You are given two positive integers `a` and `b`.

In one move, you can `change a` in the following way:

* Choose any positive `odd` integer `x (x > 0)` and replace `a` with `a + x`;
* choose any positive `even` integer `y (y > 0)` and replace `a` with `a − y`.

You can perform as many such operations as you want. You can choose the same numbers `x` and `y` in different moves.

Your task is to find the minimum number of moves required to obtain `b` from `a`. It is guaranteed that you can always obtain `b` from `a`.

You have to answer `t` independent test cases.

## Input
The first line of the input contains one integer **t (1 ≤ t ≤ 10<sup>4</sup>)** — the number of test cases.

Then `t` test cases follow. Each test case is given as two space-separated integers `a` and `b` **(1 ≤ a, b ≤ 10<sup>9</sup>)**.

## Output
For each test case, print the answer — the minimum number of moves required to obtain `b` from `a` if you can perform any number of moves described in the problem statement. It is guaranteed that you can always obtain `b` from `a`.

## Examples
| input |
| :--- |
| 5 |
| 2 3 |
| 10 10 |
| 2 4 |
| 7 4 |
| 9 3 |

| output |
| :--- |
| 1 |
| 0 |
| 2 |
| 2 |
| 1 |

## Note
In the first test case, you can just add 1.

In the second test case, you don't need to do anything.

In the third test case, you can add 1 two times.

In the fourth test case, you can subtract 4 and add 1.

In the fifth test case, you can just subtract 6.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  unsigned int a, b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if (a == b) {
      cout << 0 << endl;
    }
    else if (a > b) {
      if (((a % 2) == 0 && (b % 2) == 0) || ((a % 2) != 0 && (b % 2) != 0)) {
        cout << 1 << endl;
      }
      else {
        cout << 2 << endl;
      }
    }
    else {
      if (((a % 2) == 0 && (b % 2) == 0) || ((a % 2) != 0 && (b % 2) != 0)) {
        cout << 2 << endl;
      }
      else {
        cout << 1 << endl;
      }
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
  a, b = map(int, input().split(" "))
  if (a == b):
    print(0)
  elif (a > b):
    if (((a % 2) == 0 and (b % 2) == 0) or ((a % 2) != 0 and (b % 2) != 0)):
      print(1)
    else:
      print(2)
  else:
    if (((a % 2) == 0 and (b % 2) == 0) or ((a % 2) != 0 and (b % 2) != 0)):
      print(2)
    else:
      print(1)
  t -= 1
```