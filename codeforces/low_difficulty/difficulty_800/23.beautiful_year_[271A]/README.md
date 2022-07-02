# Beautiful Year
**Problem code**: 271A  
**Tags**: brute force  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

## Input
The single line contains integer `y (1000 ≤ y ≤ 9000)` — the year number.

## Output
Print a single integer — the minimum year number that is strictly larger than `y` and all it's digits are distinct. It is guaranteed that the answer exists.

## Examples
| input |
| :--- |
| 1987 |

| output |
| :--- |
| 2013 |

| input |
| :--- |
| 2013 |

| output |
| :--- |
| 2014 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int quantity_digits = 4;
  int year;
  string numbers;
  char number;
  bool is_different = false;
  int repeated_digits;
  cin >> year;
  while (!is_different) {
    year = year + 1;
    numbers = to_string(year);
    repeated_digits = 0;
    for (unsigned short int position = 0; position < quantity_digits; position++) {
      number = numbers[position];
      for (unsigned short int i = position + 1; i < quantity_digits; i++) {
        if (number == numbers[i]) {
          repeated_digits++;
        }
      }
    }
    if (repeated_digits == 0) {
      is_different = true;
    }
  }
  cout << year << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
year = int(input())
is_different = False
while (is_different != True):
  year = year + 1
  numbers = str(year)
  repeated_digits = 0
  for position in range(0, len(numbers)):
    number = numbers[position]
    for i in range(position + 1, len(numbers)):
      if (number == numbers[i]):
        repeated_digits += 1
  if (repeated_digits == 0):
    is_different = True
print(year)
```