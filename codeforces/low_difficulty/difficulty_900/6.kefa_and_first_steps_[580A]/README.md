# Kefa and First Steps
**Problem code**: 580A  
**Tags**: brute force, dp, implementation  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Kefa decided to make some money doing business on the Internet for exactly `n` days. He knows that on the `i-th` day `(1 ≤ i ≤ n)` he makes `ai` money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence `ai`. Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!

## Input
The first line contains integer **n (1 ≤ n ≤ $10^{5}$)**.

The second line contains `n` integers **a1, a2, ..., an (1 ≤ ai ≤ $10^{9}$)**.

## Output
Print a single integer — the length of the maximum non-decreasing subsegment of sequence `a`.

## Examples
| input |
| :--- |
| 6 |
| 2 2 1 3 4 1 |

| output |
| :--- |
| 3 |

| input |
| :--- |
| 3 |
| 2 2 9 |

| output |
| :--- |
| 3 |

## Note
In the first test the maximum non-decreasing subsegment is the numbers from the third to the fifth one.

In the second test the maximum non-decreasing subsegment is the numbers from the first to the third one.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int n, max_sg, size_sg, ai_prev, ai_current;
  cin >> n;
  max_sg = size_sg = 1;
  cin >> ai_prev;
  n--;
  while (n--) {
    cin >> ai_current;
    if (ai_prev <= ai_current) {
      size_sg += 1;
    }
    else {
      if (size_sg > max_sg) {
        max_sg = size_sg;
      }
      size_sg = 1;
    }
    ai_prev = ai_current;
  }
  if (size_sg > max_sg) {
    max_sg = size_sg;
  }
  cout << max_sg << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
a = list(map(int, input().split(" ")))
max_sg = size_sg = 1
size_a = len(a)
for i in range(1, size_a):
  if (a[i - 1] <= a[i]):
    size_sg += 1
  else:
    if (size_sg > max_sg):
      max_sg = size_sg
    size_sg = 1
if (size_sg > max_sg):
  max_sg = size_sg
print(max_sg)
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class Kafs {
  public static void main(String[] args) throws IOException {
    Integer n, max_sg, size_sg;
    String[] a;
    Scanner input_n = new Scanner(System.in);
    n = input_n.nextInt();
    a = new String[n];
    BufferedReader input_a = new BufferedReader(new InputStreamReader(System.in));
    a = (input_a.readLine()).split(" ");
    max_sg = size_sg = 1;
    for (int i = 1; i < n; i++) {
      if (Integer.valueOf(a[i - 1]) <= Integer.valueOf(a[i])) {
        size_sg++;
      }
      else {
        if (size_sg > max_sg) {
          max_sg = size_sg;
        }
        size_sg = 1;
      }
    }
    if (size_sg > max_sg) {
      max_sg = size_sg;
    }
    System.out.println(max_sg);
  }
}
```