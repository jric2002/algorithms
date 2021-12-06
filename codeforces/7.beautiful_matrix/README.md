# Beautiful Matrix
**Problem code**: 263A  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

You've got a `5 × 5` matrix, consisting of `24` zeroes and a single number one. Let's index the matrix rows by numbers from `1` to `5` from top to bottom, let's index the matrix columns by numbers from `1` to `5` from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:
1. Swap two neighboring matrix rows, that is, rows with indexes `i` and `i + 1` for some integer `i (1 ≤ i < 5)`.
2. Swap two neighboring matrix columns, that is, columns with indexes `j` and `j + 1` for some integer `j (1 ≤ j < 5)`.

You think that a matrix looks *beautiful*, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

## Input
The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of `24` zeroes and a single number one.

## Output
Print a single integer — the minimum number of moves needed to make the matrix beautiful.

## Examples
| input |
| :--- |
| 0 0 0 0 0 |
| 0 0 0 0 1 |
| 0 0 0 0 0 |
| 0 0 0 0 0 |
| 0 0 0 0 0 |

| output |
| :--- |
| 3 |

| input |
| :--- |
| 0 0 0 0 0 |
| 0 0 0 0 0 |
| 0 1 0 0 0 |
| 0 0 0 0 0 |
| 0 0 0 0 0 |

| output |
| :--- |
| 1 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
unsigned short int absoluteValue(signed short int number) {
  return (number >= 0) ? number : (-1 * number);
}
using namespace std;
int main() {
  bool matrix[5][5];
  unsigned short int min_num_mov = 0;
  for (unsigned short int r = 0; r < 5; r++) {
    for (unsigned short int c = 0; c < 5; c++) {
      cin >> matrix[r][c];
      if (matrix[r][c] == 1) {
        min_num_mov = absoluteValue(3 - (r + 1)) + absoluteValue(3 - (c + 1));
      }
    }
  }
  cout << min_num_mov << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
matrix = []
min_num_mov = 0
for r in range(0, 5):
  row = input().split(" ")
  row = [int(e) for e in row]
  matrix.append(row)
  for c in range(0, 5):
    if (matrix[r][c] == 1):
      min_num_mov = abs(3 - (r + 1)) + abs(3 - (c + 1))
print(min_num_mov)
```