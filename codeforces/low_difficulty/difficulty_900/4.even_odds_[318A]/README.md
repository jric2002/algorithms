# Even Odds
**Problem code**: 318A  
**Tags**: math  
**Time limit per test**: 1 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Being a nonconformist, Volodya is displeased with the current state of things, particularly with the order of natural numbers (natural number is positive integer number). He is determined to rearrange them. But there are too many natural numbers, so Volodya decided to start with the first `n`. He writes down the following sequence of numbers: firstly all odd integers from `1` to `n` (in ascending order), then all even integers from `1` to `n` (also in ascending order). Help our hero to find out which number will stand at the position number `k`.

## Input
The only line of input contains integers `n` and **k (1 ≤ k ≤ n ≤ 10<sup>12</sup>)**.

Please, do not use the `%lld` specifier to read or write 64-bit integers in C++. It is preferred to use the `cin`, `cout` streams or the `%I64d` specifier.

## Output
Print the number that will stand at the position number `k` after Volodya's manipulations.

## Examples
| input |
| :--- |
| 10 3 |

| output |
| :--- |
| 5 |

| input |
| :--- |
| 7 7 |

| output |
| :--- |
| 6 |

## Note
In the first sample Volodya's sequence will look like this: `{1, 3, 5, 7, 9, 2, 4, 6, 8, 10}`. The third place in the sequence is therefore occupied by the number `5`.

## Solution
The solution in **C**:
```c
#include <stdio.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  long long int n, k, temp, number;
  scanf("%lli %lli", &n, &k);
  temp = ((n % 2) == 0) ? (n / 2) : ((n + 1) / 2);
  number = (k <= temp) ? ((2 * k) - 1) : (2 * (k - temp));
  printf("%lld\n", number);
  return 0;
}
```

The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  long long int n, k, temp, number;
  cin >> n >> k;
  temp = ((n % 2) == 0) ? (n / 2) : ((n + 1) / 2);
  number = (k <= temp) ? ((2 * k) - 1) : (2 * (k - temp));
  cout << number << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n, k = map(int, input().split(" "))
temp = int(n / 2) if ((n % 2) == 0) else int((n + 1) / 2)
number = ((2 * k) - 1) if (k <= temp) else (2 * (k - temp))
print(number)
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class EvenOdds {
  public static void main(String[] args) throws IOException {
    Double n, k, temp, number;
    String[] values;
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    values = (input.readLine().split(" "));
    n = Double.valueOf(values[0]);
    k = Double.valueOf(values[1]);
    temp = ((n % 2) == 0) ? (n / 2) : ((n + 1) / 2);
    number = (k <= temp) ? ((2 * k) - 1) : (2 * (k - temp));
    System.out.print(String.format("%.0f", number));
  }
}
```