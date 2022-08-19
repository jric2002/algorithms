# Dragons
**Problem code**: 230A  
**Tags**: greedy, sortings  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Kirito is stuck on a level of the MMORPG he is playing now. To move on in the game, he's got to defeat all `n` dragons that live on this level. Kirito and the dragons have **strength**, which is represented by an integer. In the duel between two opponents the duel's outcome is determined by their strength. Initially, Kirito's strength equals `s`.

If Kirito starts duelling with the `i-th (1 ≤ i ≤ n)` dragon and Kirito's strength is not greater than the dragon's strength `xi`, then Kirito loses the duel and dies. But if Kirito's strength is greater than the dragon's strength, then he defeats the dragon and gets a bonus strength increase by `yi`.

Kirito can fight the dragons in any order. Determine whether he can move on to the next level of the game, that is, defeat all dragons without a single loss.

## Input
The first line contains two space-separated integers `s` and **n (1 ≤ s ≤ $10^{4}$, 1 ≤ n ≤ $10^{3}$)**. Then `n` lines follow: the `i-th` line contains space-separated integers `xi` and **yi (1 ≤ xi ≤ $10^{4}$, 0 ≤ yi ≤ $10^{4}$)** — the `i-th` dragon's strength and the bonus for defeating it.

## Output
On a single line print "`YES`" (without the quotes), if Kirito can move on to the next level and print "`NO`" (without the quotes), if he can't.

## Examples
| input |
| :--- |
| 2 2 |
| 1 99 |
| 100 0 |

| output |
| :--- |
| YES |

| input |
| :--- |
| 10 1 |
| 100 100 |

| output |
| :--- |
| NO |

## Note
In the first sample Kirito's strength initially equals 2. As the first dragon's strength is less than 2, Kirito can fight it and defeat it. After that he gets the bonus and his strength increases to 2 + 99 = 101. Now he can defeat the second dragon and move on to the next level.

In the second sample Kirito's strength is too small to defeat the only dragon and win.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int s, n, x, y;
  vector<pair<int, int>> d;
  bool status;
  cin >> s >> n;
  status = true;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    d.push_back(make_pair(x, y));
  }
  sort(d.begin(), d.end());
  for (pair<int, int> p : d) {
    if (s <= p.first) {
      status = false;
      break;
    }
    else {
      s += p.second;
    }
  }
  (status) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
s, n = map(int, input().split(" "))
d = []
status = True
while (n):
  d.append([int (x) for x in input().split(" ")])
  n -= 1
d.sort(key=lambda x : x[0])
for p in d:
  if (s <= p[0]):
    status = False
    break
  else:
    s += p[1]
print("YES") if (status) else print("NO")
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Arrays;
import java.util.Comparator;
public class Dragons {
  public static void main(String[] args) throws IOException {
    Integer s, n;
    Integer[][] d;
    Boolean status;
    String[] v = new String[2];
    String[] dv = new String[2];
    BufferedReader input_v = new BufferedReader(new InputStreamReader(System.in));
    v = (input_v.readLine()).split(" ");
    s = Integer.valueOf(v[0]);
    n = Integer.valueOf(v[1]);
    d = new Integer[n][2];
    status = true;
    BufferedReader input_dv = new BufferedReader(new InputStreamReader(System.in));
    for (int i = 0; i < n; i++) {
      dv = (input_dv.readLine()).split(" ");
      d[i][0] = Integer.valueOf(dv[0]);
      d[i][1] = Integer.valueOf(dv[1]);
    }
    Arrays.sort(d, new Comparator<Integer[]>() {
      @Override
      public int compare(Integer[] a, Integer[] b) {
        return a[0].compareTo(b[0]);
      }
    });
    for (Integer[] e : d) {
      if (s <= e[0]) {
        status = false;
        break;
      }
      else {
        s += e[1];
      }
    }
    System.out.println((status) ? "YES" : "NO");
  }
}
```