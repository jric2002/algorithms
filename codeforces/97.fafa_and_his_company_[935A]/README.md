# Fafa and his Company
**Problem code**: 935A  
**Tags**: brute force, immplementation  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Fafa owns a company that works on huge projects. There are `n` employees in Fafa's company. Whenever the company has a new project to start working on, Fafa has to divide the tasks of this project among all the employees.

Fafa finds doing this every time is very tiring for him. So, he decided to choose the best `l` employees in his company as team leaders. Whenever there is a new project, Fafa will divide the tasks among only the team leaders and each team leader will be responsible of some positive number of employees to give them the tasks. To make this process fair for the team leaders, each one of them should be responsible for the same number of employees. Moreover, every employee, who is not a team leader, has to be under the responsibility of exactly one team leader, and no team leader is responsible for another team leader.

Given the number of employees `n`, find in how many ways Fafa could choose the number of team leaders `l` in such a way that it is possible to divide employees between them evenly.

## Input
The input consists of a single line containing a positive integer **n (2 ≤ n ≤ 10<sup>5</sup>)** — the number of employees in Fafa's company.

## Output
Print a single integer representing the answer to the problem.

## Examples
| input |
| :--- |
| 2 |

| output |
| :--- |
| 1 |

| input |
| :--- |
| 10 |

| output |
| :--- |
| 3 |

## Note
In the second sample Fafa has 3 ways:

* choose only 1 employee as a team leader with 9 employees under his responsibility.
* choose 2 employees as team leaders with 4 employees under the responsibility of each of them.
* choose 5 employees as team leaders with 1 employee under the responsibility of each of them.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int n, a;
  cin >> n;
  a = 0;
  for (unsigned short int l = 1; l <= (n / 2); l++) {
    if (((n - l) % l) == 0) {
      a++;
    }
  }
  cout << a << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
a = 0
for l in range(1, int(n / 2) + 1):
  if (((n - l) % l) == 0):
    a += 1
print(a)
```