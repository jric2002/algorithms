# Young Physicist
**Problem code**: 69A  
**Tags**: implementation, math  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

A guy named Vasya attends the final grade of a high school. One day Vasya decided to watch a match of his favorite hockey team. And, as the boy loves hockey very much, even more than physics, he forgot to do the homework. Specifically, he forgot to complete his physics tasks. Next day the teacher got very angry at Vasya and decided to teach him a lesson. He gave the lazy student a seemingly easy task: You are given an idle body in space and the forces that affect it. The body can be considered as a material point with coordinates `(0; 0; 0)`. Vasya had only to answer whether it is in equilibrium. "Piece of cake" — thought Vasya, we need only to check if the sum of all vectors is equal to `0`. So, Vasya began to solve the problem. But later it turned out that there can be lots and lots of these forces, and Vasya can not cope without your help. Help him. Write a program that determines whether a body is idle or is moving by the given vectors of forces.

## Input
The first line contains a positive integer `n (1 ≤ n ≤ 100)`, then follow `n` lines containing three integers each: the `xi` coordinate, the `yi` coordinate and the `zi` coordinate of the force vector, applied to the body `(-100 ≤ xi, yi, zi ≤ 100)`.

## Output
Print the word "`YES`" if the body is in equilibrium, or the word "`NO`" if it is not.

## Examples
| input |
| :--- |
| 3 |
| 4 1 7 |
| -2 4 -1 |
| 1 -5 -3 |

| output |
| :--- |
| NO |

| input |
| :--- |
| 3 |
| 3 -1 7 |
| -5 2 -4 |
| 2 -1 -3 |

| output |
| :--- |
| YES |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  short int n;
  short int xi, yi, zi;
  short int xr, yr, zr;
  cin >> n;
  xr = yr = zr = 0;
  while (n--) {
    cin >> xi >> yi >> zi;
    xr += xi;
    yr += yi;
    zr += zi;
  }
  if (xr == 0 && yr == 0 && zr == 0) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
xr = yr = zr = 0
while (n):
  x, y, z = map(int, input().split(" "))
  xr += x
  yr += y
  zr += z
  n -= 1
if (xr == 0 and yr == 0 and zr == 0):
  print("YES")
else:
  print("NO")
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class YoungPhysicist {
  public static void main(String[] args) throws IOException{
    Short n;
    Short x, y, z;
    String[] f;
    Scanner input_n = new Scanner(System.in);
    n = input_n.nextShort();
    x = y = z = 0;
    BufferedReader input_f = new BufferedReader(new InputStreamReader(System.in));
    while (n > 0) {
      f = (input_f.readLine()).split(" ");
      x = (short)(x + Short.valueOf(f[0]));
      y = (short)(y + Short.valueOf(f[1]));
      z = (short)(z + Short.valueOf(f[2]));
      n = (short)(n - 1);
    }
    if (x == 0 && y == 0 && z == 0) {
      System.out.println("YES");
    }
    else {
      System.out.println("NO");
    }
  }
}
```