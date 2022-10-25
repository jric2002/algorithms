# Puzzles
**Problem code**: 337A  
**Tags**: greedy  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

The end of the school year is near and Ms. Manana, the teacher, will soon have to say goodbye to a yet another class. She decided to prepare a goodbye present for her `n` students and give each of them a jigsaw puzzle (which, as wikipedia states, is a tiling puzzle that requires the assembly of numerous small, often oddly shaped, interlocking and tessellating pieces).

The shop assistant told the teacher that there are `m` puzzles in the shop, but they might differ in difficulty and size. Specifically, the first jigsaw puzzle consists of `f1` pieces, the second one consists of `f2` pieces and so on.

Ms. Manana doesn't want to upset the children, so she decided that the difference between the numbers of pieces in her presents must be as small as possible. Let `A` be the number of pieces in the largest puzzle that the teacher buys and `B` be the number of pieces in the smallest such puzzle. She wants to choose such `n` puzzles that `A - B` is minimum possible. Help the teacher and find the least possible value of `A - B`.

## Input
The first line contains space-separated integers `n` and `m (2 ≤ n ≤ m ≤ 50)`. The second line contains m space-separated integers `f1, f2, ..., fm (4 ≤ fi ≤ 1000)` — the quantities of pieces in the puzzles sold in the shop.

## Output
Print a single integer — the least possible difference the teacher can obtain.

## Examples
| input |
| :--- |
| 4 6 |
| 10 12 10 7 5 22 |

| output |
| :--- |
| 5 |

## Note
Sample 1. The class has 4 students. The shop sells 6 puzzles. If Ms. Manana buys the first four puzzles consisting of 10, 12, 10 and 7 pieces correspondingly, then the difference between the sizes of the largest and the smallest puzzle will be equal to 5. It is impossible to obtain a smaller difference. Note that the teacher can also buy puzzles 1, 3, 4 and 5 to obtain the difference 5.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int n, m, f, min_p, d;
  vector<int> p;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> f;
    p.push_back(f);
  }
  sort(p.begin(), p.end());
  min_p = numeric_limits<int>::max();
  for (int i = 0; i < (m - n + 1); i++) {
    auto mm = minmax_element(p.begin() + i, p.begin() + n + i);
    d = *(mm.second) - *(mm.first);
    if (d < min_p) {
      min_p = d;
    }
  }
  cout << min_p << endl;
  return 0;
}
/* Definition */
```