# Next Round
**Problem code**: 158A  
**Tags**: *special problem, implementation  
**Time limit per test**: 3 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of `n` participants took part in the contest `(n ≥ k)`, and you already know their scores. Calculate how many participants will advance to the next round.

## Input
The first line of the input contains two integers `n` and `k (1 ≤ k ≤ n ≤ 50)` separated by a single space.

The second line contains `n` space-separated integers `a1, a2, ..., an (0 ≤ ai ≤ 100)`, where `ai` is the score earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all `i` from 1 to `n - 1` the following condition is fulfilled: `ai ≥ ai + 1`).

## Output
Output the number of participants who advance to the next round.

## Examples
| input |
| :--- |
| 8 5 |
| 10 9 8 7 7 7 5 5 |

| output |
| :--- |
| 6 |

| input |
| :--- |
| 4 2 |
| 0 0 0 0 |

| output |
| :--- |
| 0 |

## Note
In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also earned 7 points, there are 6 advancers.

In the second example nobody got a positive score.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  short int n, k;
  cin >> n >> k;
  if (k >= 1 && k <= n && n <= 50) {
    unsigned short int score, reference_score = 1, next_round = 0;
    for (unsigned short int i = 1; i <= n; i++) {
      cin >> score;
      if (score >= reference_score) {
        if (i == k) {
          reference_score = score;
        }
        next_round++;
      }
    }
    cout << next_round << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
input_data = (input()).split(" ")
input_data = [int(e) for e in input_data]
n, k = input_data
if (k >= 1 and n >= k and n <= 50):
  reference_score = 1
  next_round = 0
  score = input().split(" ")
  score = list(map(int, score))
  for i in range(0, len(score)):
    if (score[i] >= reference_score):
      if ((i + 1) == k):
        reference_score = score[i]
      next_round += 1
  print(next_round)
```