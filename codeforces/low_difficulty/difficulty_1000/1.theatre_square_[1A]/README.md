# Theatre Square
**Problem code**: 1A  
**Tags**: math  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Theatre Square in the capital city of Berland has a rectangular shape with the size `n * m` meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size `a * a`.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

## Input
The input contains three positive integer numbers in the first line: `n`, `m` and `a` **(1 ≤  n, m, a ≤ 10<sup>9</sup>)**.

## Output
Write the needed number of flagstones.

## Examples
| input |
| :--- |
| 6 6 4 |

| output |
| :--- |
| 4 |

## Solution
The solution in **C**:
```c
#include <stdio.h>
#include <math.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  int n, m, a;
  long long int r;
  scanf("%i %li %i", &n, &m, &a);
  r = ceil(n / (double)a) * ceil(m / (double)a);
  printf("%lli\n", r);
  return 0;
}
```

The solution in **C++**:
```cpp
#include <iostream>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int n, m, a;
  long long int r;
  cin >> n >> m >> a;
  r = ceil(n / (float)a) * ceil(m / (float)a);
  cout << r << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
import math
n, m, a = map(int, input().split(" "))
r = math.ceil(n / a) * math.ceil(m / a)
print(r)
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.lang.Math;
public class TheatreSquare {
  public static void main(String[] args) throws IOException {
    Integer n, m, a;
    Double r;
    String[] values;
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    values = (input.readLine()).split(" ");
    n = Integer.valueOf(values[0]);
    m = Integer.valueOf(values[1]);
    a = Integer.valueOf(values[2]);
    r = Math.ceil(n / a.doubleValue()) * Math.ceil(m / a.doubleValue());
    System.out.format("%.0f", r);
  }
}
```