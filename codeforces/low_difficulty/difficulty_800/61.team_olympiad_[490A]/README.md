# Team Olympiad
**Problem code**: 490A  
**Tags**: greedy, implementation, sortings  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

The School N°0 of the capital of Berland has `n` children studying in it. All the children in this school are gifted: some of them are good at programming, some are good at maths, others are good at PE (Physical Education). Hence, for each child we know value `ti`:

* `ti = 1`, if the `i-th` child is good at programming,
* `ti = 2`, if the `i-th` child is good at maths,
* `ti = 3`, if the `i-th` child is good at PE

Each child happens to be good at exactly one of these three subjects.

The Team Scientific Decathlon Olympias requires teams of three students. The school teachers decided that the teams will be composed of three children that are good at different subjects. That is, each team must have one mathematician, one programmer and one sportsman. Of course, each child can be a member of no more than one team.

What is the maximum number of teams that the school will be able to present at the Olympiad? How should the teams be formed for that?

## Input
The first line contains integer `n (1 ≤ n ≤ 5000)` — the number of children in the school. The second line contains `n` integers `t1, t2, ..., tn (1 ≤ ti ≤ 3)`, where `ti` describes the skill of the `i-th` child.

## Output
In the first line output integer `w` — the largest possible number of teams.

Then print `w` lines, containing three numbers in each line. Each triple represents the indexes of the children forming the team. You can print both the teams, and the numbers in the triplets in any order. The children are numbered from `1` to `n` in the order of their appearance in the input. Each child must participate in no more than one team. If there are several solutions, print any of them.

If no teams can be compiled, print the only line with value `w` equal to `0`.

## Examples
| input |
| :--- |
| 7 |
| 1 3 1 3 2 1 2 |

| output |
| :--- |
| 2 |
| 3 5 2 |
| 6 7 4 |

| input |
| :--- |
| 4 |
| 2 1 1 2 |

| output |
| :--- |
| 0 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, t, w;
  vector<unsigned short int> programming_students;
  vector<unsigned short int> maths_students;
  vector<unsigned short int> pe_students;
  vector<unsigned short int> number_student_skill;
  cin >> n;
  for (unsigned short int i = 1; i <= n; i++) {
    cin >> t;
    if (t == 1) {
      programming_students.push_back(i);
    }
    else if (t == 2) {
      maths_students.push_back(i);
    }
    else {
      pe_students.push_back(i);
    }
  }
  number_student_skill.push_back(programming_students.size());
  number_student_skill.push_back(maths_students.size());
  number_student_skill.push_back(pe_students.size());
  sort(number_student_skill.begin(), number_student_skill.end());
  w = number_student_skill.at(0);
  cout << w << endl;
  for (unsigned short int i = 0; i < w; i++) {
    cout << programming_students.at(i) << " " << maths_students.at(i) << " " << pe_students.at(i) << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
student_skills = list(map(int, input().split(" ")))
programming_students = []
maths_students = []
pe_students = []
number_student_skill = []
for i in range(0, n):
  t = student_skills[i]
  if (t == 1):
    programming_students.append(i + 1)
  elif (t == 2):
    maths_students.append(i + 1)
  else:
    pe_students.append(i + 1)
number_student_skill.append(len(programming_students))
number_student_skill.append(len(maths_students))
number_student_skill.append(len(pe_students))
number_student_skill.sort()
w = number_student_skill[0]
print(w)
for i in range(0, w):
  print(programming_students[i], maths_students[i], pe_students[i], sep=" ")
```