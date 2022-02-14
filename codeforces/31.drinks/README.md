# Drinks
**Problem code**: 200B  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Little Vasya loves orange juice very much. That's why any food and drink in his kitchen necessarily contains orange juice. There are ``x`` drinks in his fridge, the volume fraction of orange juice in the i-th drink equals `pi` percent.

One day Vasya decided to make himself an orange cocktail. He took equal proportions of each of the n drinks and mixed them. Then he wondered, how much orange juice the cocktail has.

Find the volume fraction of orange juice in the final drink.

## Input
The first input line contains a single integer `n (1 ≤ n ≤ 100)` — the number of orange-containing drinks in Vasya's fridge. The second line contains `n` integers `pi (0 ≤ pi ≤ 100)` — the volume fraction of orange juice in the i-th drink, in percent. The numbers are separated by a space.

## Output
Print the volume fraction in percent of orange juice in Vasya's cocktail. The answer will be considered correct if the absolute or relative error does not exceed **10<sup>- 4</sup>**.

## Examples
| input |
| :--- |
| 3 |
| 50 50 100 |

| output |
| :--- |
| 66.666666666667 |

| input |
| :--- |
| 4 |
| 0 25 50 75 |

| output |
| :--- |
| 37.500000000000 |

## Note
Note to the first sample: let's assume that Vasya takes x milliliters of each drink from the fridge. Then the volume of pure juice in the cocktail will equal ![Drinks - Example one](./drinks-example-one.png) milliliters. The total cocktail's volume equals 3·x milliliters, so the volume fraction of the juice in the cocktail equals ![Drinks - Example two](./drinks-example-two.png) , that is, 66.(6) percent.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, p, sum = 0;
  float juice_volume;
  cin >> n;
  for (unsigned short int i = 0; i < n; i++) {
    cin >> p;
    sum += p;
  }
  juice_volume = (float)(sum) / n;
  cout << juice_volume << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
p = list(map(int, input().split(" ")))
sum = 0
juice_volume = 0
for position in range(0, n):
  sum += p[position]
juice_volume = (sum / n)
print("{0:.12f}".format(juice_volume))
```