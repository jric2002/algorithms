# Expression
**Problem code**: 479A  
**Tags**: brute force, math  
**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Petya studies in a school and he adores Maths. His class has been studying arithmetic expressions. On the last class the teacher wrote three positive integers `a`, `b`, `c` on the blackboard. The task was to insert signs of operations '`+`' and '`*`', and probably brackets between the numbers so that the value of the resulting expression is as large as possible. Let's consider an example: assume that the teacher wrote numbers 1, 2 and 3 on the blackboard. Here are some ways of placing signs and brackets:
* 1+2*3=7
* 1*(2+3)=5
* 1*2*3=6
* (1+2)*3=9

Note that you can insert operation signs only between `a` and `b`, and between `b` and `c`, that is, you cannot swap integers. For instance, in the given sample you cannot get expression `(1+3)*2`.

It's easy to see that the maximum value that you can obtain is `9`.

Your task is: given `a`, `b` and `c` print the maximum value that you can get.

## Input
The input contains three integers `a`, `b` and `c`, each on a single line `(1 ≤ a, b, c ≤ 10)`.

## Output
Print the maximum value of the expression that you can obtain.

## Examples
| input |
| :--- |
| 1 |
| 2 |
| 3 |

| output |
| :--- |
| 9 |

| input |
| :--- |
| 2 |
| 10 |
| 3 |

| output |
| :--- |
| 60 |

## Solution
```c
#include <stdio.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  unsigned short int number_expressions = 6;
  unsigned short int expressions[number_expressions];
  unsigned short int a, b, c, max;
  scanf("%hu", &a);
  scanf("%hu", &b);
  scanf("%hu", &c);
  expressions[0] = a + b + c;
  expressions[1] = a + b * c;
  expressions[2] = (a + b) * c;
  expressions[3] = a * b + c;
  expressions[4] = a * (b + c);
  expressions[5] = a * b * c;
  max = expressions[0];
  for (unsigned short int i = 1; i < number_expressions; i++) {
    if (expressions[i] > max) {
      max = expressions[i];
    }
  }
  printf("%hu\n", max);
  return 0;
}
```

The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int number_expressions = 6;
  unsigned short int expressions[number_expressions];
  unsigned short int a, b, c, max;
  cin >> a;
  cin >> b;
  cin >> c;
  expressions[0] = a + b + c;
  expressions[1] = a + b * c;
  expressions[2] = (a + b) * c;
  expressions[3] = a * b + c;
  expressions[4] = a * (b + c);
  expressions[5] = a * b * c;
  max = expressions[0];
  for (unsigned short int i = 1; i < number_expressions; i++) {
    if (expressions[i] > max) {
      max = expressions[i];
    }
  }
  cout << max << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
a = int(input())
b = int(input())
c = int(input())
expressions = []
expressions.append(a + b + c)
expressions.append(a + b * c)
expressions.append((a + b) * c)
expressions.append(a * b + c)
expressions.append(a * (b + c))
expressions.append(a * b * c)
print(max(expressions))
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections;
public class Expression {
  public static void main(String[] args) {
    Integer a, b, c, max;
    Integer number_expressions = 6;
    Integer[] expressions = new Integer[number_expressions];
    Scanner input = new Scanner(System.in);
    a = input.nextInt();
    b = input.nextInt();
    c = input.nextInt();
    expressions[0] = a + b + c;
    expressions[1] = a + b * c;
    expressions[2] = (a + b) * c;
    expressions[3] = a * b + c;
    expressions[4] = a * (b + c);
    expressions[5] = a * b * c;
    max = Collections.max(Arrays.asList(expressions));
    System.out.println(max);
  }
}
```