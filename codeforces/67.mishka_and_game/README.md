# Mishka and Game
**Problem code**: 703A  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Mishka is a little polar bear. As known, little bears loves spending their free time playing dice for chocolates. Once in a wonderful sunny morning, walking around blocks of ice, Mishka met her friend Chris, and they started playing the game.

Rules of the game are very simple: at first number of rounds `n` is defined. In every round each of the players throws a cubical dice with distinct numbers from 1 to 6 written on its faces. Player, whose value after throwing the dice is greater, wins the round. In case if player dice values are equal, no one of them is a winner.

In average, player, who won most of the rounds, is the winner of the game. In case if two players won the same number of rounds, the result of the game is draw.

Mishka is still very little and can't count wins and losses, so she asked you to watch their game and determine its result. Please help her!

## Input
The first line of the input contains single integer `n n (1 ≤ n ≤ 100)` — the number of game rounds.

The next n lines contains rounds description. `i-th` of them contains pair of integers `mi` and `ci (1 ≤ mi, ci ≤ 6)` — values on dice upper face after Mishka's and Chris' throws in `i-th` round respectively.

## Output
If Mishka is the winner of the game, print "`Mishka`" (without quotes) in the only line.

If Chris is the winner of the game, print "`Chris`" (without quotes) in the only line.

If the result of the game is draw, print "`Friendship is magic!^^`" (without quotes) in the only line.

## Examples
| input |
| :--- |
| 3 |
| 3 5 |
| 2 1 |
| 4 2 |

| output |
| :--- |
| Mishka |

| input |
| :--- |
| 2 |
| 6 1 |
| 1 6 |

| output |
| :--- |
| Friendship is magic!^^ |

| input |
| :--- |
| 3 |
| 1 5 |
| 3 3 |
| 2 2 |

| output |
| :--- |
| Chris |

## Note
In the first sample case Mishka loses the first round, but wins second and third rounds and thus she is the winner of the game.

In the second sample case Mishka wins the first round, Chris wins the second round, and the game ends with draw with score 1:1.

In the third sample case Chris wins the first round, but there is no winner of the next two rounds. The winner of the game is Chris.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, m, c, m_score = 0, c_score = 0;
  cin >> n;
  while (n--) {
    cin >> m >> c;
    if (m > c) {
      m_score++;
    }
    else if (m < c) {
      c_score++;
    }
    else {
      m_score++;
      c_score++;
    }
  }
  if (m_score > c_score) {
    cout << "Mishka" << endl;
  }
  else if (m_score < c_score) {
    cout << "Chris" << endl;
  }
  else {
    cout << "Friendship is magic!^^" << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
m_score = 0
c_score = 0
while (n):
  m, c = [int(x) for x in input().split(" ")]
  if (m > c):
    m_score += 1
  elif (m < c):
    c_score += 1
  else:
    m_score += 1
    c_score += 1
  n -= 1
if (m_score > c_score):
  print("Mishka")
elif (m_score < c_score):
  print("Chris")
else:
  print("Friendship is magic!^^")
```