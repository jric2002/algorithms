# Again Twenty Five!
**Problem code**: 630A  
**Tags**: number theory  
**Time limit per test**: 0.5 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

The HR manager was disappointed again. The last applicant failed the interview the same way as `24` previous ones. "Do I give such a hard task?" — the HR manager thought. "Just raise number `5` to the power of `n` and get last two digits of the number. Yes, of course, `n` can be rather big, and one cannot find the power using a calculator, but we need people who are able to think, not just follow the instructions."

Could you pass the interview in the machine vision company in IT City?

## Input
The only line of the input contains a single integer **n (2 ≤ n ≤ 2 * 10<sup>18</sup>)** — the power in which you need to raise number `5`.

## Output
Output the last two digits of **5<sup>n</sup>** without spaces between them.

## Examples
| input |
| :--- |
| 2 |

| output |
| :--- |
| 25 |

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  char c;
  cin >> c;
  cout << "25" << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
input()
print("25")
```