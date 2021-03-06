# Tram
**Problem code**: 116A  
**Tags**: implementation  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Linear Kingdom has exactly one tram line. It has `n` stops, numbered from 1 to `n` in the order of tram's movement. At the i-th stop `ai` passengers exit the tram, while `bi` passengers enter it. The tram is empty before it arrives at the first stop. Also, when the tram arrives at the last stop, all passengers exit so that it becomes empty.

Your task is to calculate the tram's minimum capacity such that the number of people inside the tram at any time never exceeds this capacity. Note that at each stop all exiting passengers exit **before** any entering passenger enters the tram.

## Input
The first line contains a single number `n (2 ≤ n ≤ 1000)` — the number of the tram's stops.

Then `n` lines follow, each contains two integers `ai` and `bi (0 ≤ ai, bi ≤ 1000)` — the number of passengers that exits the tram at the i-th stop, and the number of passengers that enter the tram at the i-th stop. The stops are given from the first to the last stop in the order of tram's movement.
* The number of people who exit at a given stop does not exceed the total number of people in the tram immediately before it arrives at the stop. More formally,![Tram - Example 1](./tram-example-1.png) This particularly means that `a1 = 0`.
* At the last stop, **all** the passengers exit the tram and it becomes empty. More formally, ![Tram - Example 2](./tram-example-2.png)
* No passenger will enter the train at the last stop. That is, `bn = 0`.

## Output
Print a single integer denoting the minimum possible capacity of the tram (0 is allowed).

## Examples
| input |
| :--- |
| 4 |
| 0 3 |
| 2 5 |
| 4 2 |
| 4 0 |

| output |
| :--- |
| 6 |

## Note
For the first example, a capacity of 6 is sufficient:
* At the first stop, the number of passengers inside the tram before arriving is 0. Then, 3 passengers enter the tram, and the number of passengers inside the tram becomes 3.
* At the second stop, 2 passengers exit the tram (1 passenger remains inside). Then, 5 passengers enter the tram. There are 6 passengers inside the tram now.
* At the third stop, 4 passengers exit the tram (2 passengers remain inside). Then, 2 passengers enter the tram. There are 4 passengers inside the tram now.
* Finally, all the remaining passengers inside the tram exit the tram at the last stop. There are no passenger inside the tram now, which is in line with the constraints.

Since the number of passengers inside the tram never exceeds 6, a capacity of 6 is sufficient. Furthermore it is not possible for the tram to have a capacity less than 6. Hence, 6 is the correct answer.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  signed short int n;
  unsigned int min_capacity = 0;
  unsigned int a, b, passengers = 0;
  cin >> n;
  while (n--) {
    cin >> a >> b;
    passengers = (passengers - a) + b;
    if (passengers > min_capacity) {
      min_capacity = passengers;
    }
  }
  cout << min_capacity << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
min_capacity = 0
passengers = 0
while(n):
  input_data = input().split(" ")
  a = int(input_data[0])
  b = int(input_data[1])
  passengers = (passengers - a) + b
  if (passengers > min_capacity):
    min_capacity = passengers
  n -= 1
print(min_capacity)
```