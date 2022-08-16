# Lucky Division
**Problem code**: 122A  
**Tags**: brute force, number theory  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

***Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.***

Petya calls a number **almost lucky** if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

## Input
The single line contains an integer `n (1 ≤ n ≤ 1000)` — the number that needs to be checked.

## Output
In the only line print "`YES`" (without the quotes), if number `n` is almost lucky. Otherwise, print "`NO`" (without the quotes).

## Examples
| input |
| :--- |
| 47 |

| output |
| :--- |
| YES |

| input |
| :--- |
| 16 |

| output |
| :--- |
| YES |

| input |
| :--- |
| 78 |

| output |
| :--- |
| NO |

## Note
Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.

## Solution
```c
#include <stdio.h>
#include <stdbool.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  unsigned short int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  unsigned short int n, size_ln, i;
  bool s;
  scanf("%hu", &n);
  size_ln = sizeof(lucky_numbers)/sizeof(unsigned short int);
  s = false;
  i = 0;
  while (i < size_ln && lucky_numbers[i] <= n) {
    if ((n % lucky_numbers[i]) == 0) {
      s = true;
      break;
    }
    i++;
  }
  (s) ? printf("YES\n") : printf("NO\n");
  return 0;
}
```

The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  unsigned short int n, size_ln, i;
  bool s;
  cin >> n;
  size_ln = sizeof(lucky_numbers)/sizeof(unsigned short int);
  s = false;
  i = 0;
  while (i < size_ln && lucky_numbers[i] <= n) {
    if ((n % lucky_numbers[i]) == 0) {
      s = true;
      break;
    }
    i++;
  }
  (s) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
lucky_numbers = [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]
size_ln = len(lucky_numbers)
s = False
i = 0
while (i < size_ln and lucky_numbers[i] <= n):
  if ((n % lucky_numbers[i]) == 0):
    s = True
    break
  i += 1
print("YES") if (s) else print("NO")
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
public class LuckyDivision {
  public static void main(String[] args) {
    Integer[] lucky_numbers = new Integer[]{4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    Integer n, size_ln, i;
    Boolean s;
    Scanner input = new Scanner(System.in);
    n = input.nextInt();
    s = false;
    size_ln = lucky_numbers.length;
    i = 0;
    while (i < size_ln && lucky_numbers[i] <= n) {
      if ((n % lucky_numbers[i]) == 0) {
        s = true;
        break;
      }
      i++;
    }
    System.out.println((s) ? "YES" : "NO");
  }
}
```