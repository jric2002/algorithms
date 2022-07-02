# I_love_%username%
**Problem code**: 155A  
**Tags**: brute force  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Vasya adores sport programming. He can't write programs but he loves to watch the contests' progress. Vasya even has a favorite coder and Vasya pays special attention to him.

One day Vasya decided to collect the results of all contests where his favorite coder participated and track the progress of his coolness. For each contest where this coder participated, he wrote out a single non-negative number — the number of points his favorite coder earned in the contest. Vasya wrote out the points for the contest in the order, in which the contests run (naturally, no two contests ran simultaneously).

Vasya considers a coder's performance in a contest amazing in two situations: he can break either his best or his worst performance record. First, it is amazing if during the contest the coder earns strictly `more` points that he earned on each past contest. Second, it is amazing if during the contest the coder earns strictly `less` points that he earned on each past contest. A coder's first contest isn't considered amazing. Now he wants to count the number of amazing performances the coder had throughout his whole history of participating in contests. But the list of earned points turned out long and Vasya can't code... That's why he asks you to help him.

## Input
The first line contains the single integer `n (1 ≤ n ≤ 1000)` — the number of contests where the coder participated.

The next line contains `n` space-separated non-negative integer numbers — they are the points which the coder has earned. The points are given in the chronological order. All points do not exceed 10000.

## Output
Print the single number — the number of amazing performances the coder has had during his whole history of participating in the contests.

## Examples
| input |
| :--- |
| 5 |
| 100 50 200 150 200 |

| output |
| :--- |
| 2 |

| input |
| :--- |
| 10 |
| 4664 6496 5814 7010 5762 5736 6944 4850 3698 7242 |

| output |
| :--- |
| 4 |

## Note
In the first sample the performances number 2 and 3 are amazing.

In the second sample the performances number 2, 4, 9 and 10 are amazing.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  unsigned short int score, max_score, min_score;
  unsigned short int num_amazing = 0;
  cin >> n;
  cin >> score;
  max_score = min_score = score;
  for (unsigned short int i = 1; i < n; i++) {
    cin >> score;
    if (score > max_score) {
      max_score = score;
      num_amazing++;
    }
    if (score < min_score) {
      min_score = score;
      num_amazing++;
    }
  }
  cout << num_amazing << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
scores = list(map(int, input().split(" ")))
max_score = min_score = scores[0]
num_amazing = 0
for i in range(1, n):
  score = scores[i]
  if (score > max_score):
    max_score = score
    num_amazing += 1
  if (score < min_score):
    min_score = score
    num_amazing += 1
print(num_amazing)
```