# Sereja and Dima
**Problem code**: 381A  
**Tags**: greedy, implementation, two pointers  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Sereja and Dima play a game. The rules of the game are very simple. The players have `n` cards in a row. Each card contains a number, all numbers on the cards are distinct. The players take turns, Sereja moves first. During his turn a player can take one card: either the leftmost card in a row, or the rightmost one. The game ends when there is no more cards. The player who has the maximum sum of numbers on his cards by the end of the game, wins.

Sereja and Dima are being greedy. Each of them chooses the card with the larger number during his move.

Inna is a friend of Sereja and Dima. She knows which strategy the guys are using, so she wants to determine the final score, given the initial state of the game. Help her.

## Input
The first line contains integer `n (1 ≤ n ≤ 1000)` — the number of cards on the table. The second line contains space-separated numbers on the cards from left to right. The numbers on the cards are distinct integers from `1` to `1000`.

## Output
On a single line, print two integers. The first number is the number of Sereja's points at the end of the game, the second number is the number of Dima's points at the end of the game.

## Examples
| input |
| :--- |
| 4 |
| 4 1 2 10 |

| output |
| :--- |
| 12 5 |

| input |
| :--- |
| 7 |
| 1 2 3 4 5 6 7 |

| output |
| :--- |
| 16 12 |

## Note
In the first sample Sereja will take cards with numbers 10 and 2, so Sereja's sum is 12. Dima will take cards with numbers 4 and 1, so Dima's sum is 5.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, value, max_value, pl, pr;
  unsigned int sereja_score, dima_score;
  cin >> n;
  vector<unsigned short int> cards;
  for (unsigned short int i = 0; i < n; i++) {
    cin >> value;
    cards.push_back(value);
  }
  sereja_score = dima_score = 0;
  pl = 0;
  pr = n - 1;
  for (unsigned short int i = 0; i < n; i++) {
    if (cards[pl] > cards[pr]) {
      max_value = cards[pl];
      pl++;
    }
    else {
      max_value = cards[pr];
      pr--;
    }
    if ((i % 2) == 0) {
      sereja_score += max_value;
    }
    else {
      dima_score += max_value;
    }
  }
  cout << sereja_score << " " << dima_score << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
cards = list(map(int, input().split(" ")))
max_value = 0
sereja_score = 0
dima_score = 0
pl = 0
pr = n - 1
for i in range(0, n):
  if (cards[pl] > cards[pr]):
    max_value = cards[pl]
    pl += 1
  else:
    max_value = cards[pr]
    pr -= 1
  if ((i % 2) == 0):
    sereja_score += max_value
  else:
    dima_score += max_value
print(sereja_score, dima_score, sep=" ")
```