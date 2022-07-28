# Twins
**Problem code**: 160A  
**Tags**: greedy, sortings  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Imagine that you have a twin brother or sister. Having another person that looks exactly like you seems very unusual. It's hard to say if having something of an alter ego is good or bad. And if you do have a twin, then you very well know what it's like.

Now let's imagine a typical morning in your family. You haven't woken up yet, and Mom is already going to work. She has been so hasty that she has nearly forgotten to leave the two of her darling children some money to buy lunches in the school cafeteria. She fished in the purse and found some number of coins, or to be exact, n coins of arbitrary values `a1, a2, ..., an`. But as Mom was running out of time, she didn't split the coins for you two. So she scribbled a note asking you to split the money equally.

As you woke up, you found Mom's coins and read her note. "But why split the money equally?" — you thought. After all, your twin is sleeping and he won't know anything. So you decided to act like that: pick for yourself some subset of coins so that the sum of values of your coins is `strictly larger` than the sum of values of the remaining coins that your twin will have. However, you correctly thought that if you take too many coins, the twin will suspect the deception. So, you've decided to stick to the following strategy to avoid suspicions: you take the `minimum number of coins`, whose sum of values is strictly more than the sum of values of the remaining coins. On this basis, determine what `minimum` number of coins you need to take to divide them in the described manner.

## Input
The first line contains integer `n (1 ≤ n ≤ 100)` — the number of coins. The second line contains a sequence of `n` integers `a1, a2, ..., an (1 ≤ ai ≤ 100)` — the coins' values. All numbers are separated with spaces.

## Output
In the single line print the single number — the minimum needed number of coins.

## Examples
| input |
| :--- |
| 2 |
| 3 3 |

| output |
| :--- |
| 2 |

| input |
| :--- |
| 3 |
| 2 1 2 |

| output |
| :--- |
| 2 |

## Note
In the first sample you will have to take 2 coins (you and your twin have sums equal to 6, 0 correspondingly). If you take 1 coin, you get sums 3, 3. If you take 0 coins, you get sums 0, 6. Those variants do not satisfy you as your sum should be strictly more that your twins' sum.

In the second sample one coin isn't enough for us, too. You can pick coins with values 1, 2 or 2, 2. In any case, the minimum number of coins equals 2.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
template <typename T>
short int addition(T vb, T ve) {
  short int s = 0;
  for (T it = vb; it != ve; it++) {
    s += *it;
  }
  return s;
}
int main() {
  unsigned short int n, c, min_coins;
  unsigned int s1, s2;
  vector<unsigned short int> coins;
  cin >> n;
  for (unsigned short int i = 0; i < n; i++) {
    cin >> c;
    coins.push_back(c);
  }
  sort(coins.begin(), coins.end());
  reverse(coins.begin(), coins.end());
  min_coins = 0;
  do {
    s1 = s2 = 0;
    for (unsigned short int j = 0; j < min_coins; j++) {
      s1 += coins.at(j);
    }
    for (unsigned short int j = min_coins; j < n; j++) {
      s2 += coins.at(j);
    }
    if (s1 > s2) {
      break;
    }
    min_coins++;
  } while (min_coins < n);
  cout << min_coins << endl;
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
n = int(input())
coins = [int(x) for x in input().split(" ")]
coins.sort()
coins.reverse()
min_coins = 0
while (min_coins < n):
  s1 = s2 = 0
  for i in range(0, min_coins):
    s1 += coins[i]
  for i in range(min_coins, n):
    s2 += coins[i]
  if (s1 > s2):
    break
  min_coins += 1
print(min_coins)
```

The solution in **Java**:
```java
/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
import java.util.Arrays;
public class Twins {
  public static void main(String[] args) {
    short n, min_coins, i;
    int s1, s2;
    short[] coins;
    Scanner input_n = new Scanner(System.in);
    n = input_n.nextShort();
    coins = new short[n];
    Scanner input_coins = new Scanner(System.in);
    i = 0;
    for (String coin : (input_coins.nextLine()).split(" ")) {
      coins[i] = Short.valueOf(coin);
      i++;
    }
    Arrays.sort(coins);
    i = (short)(n - 1);
    do {
      s1 = s2 = 0;
      for (short j = (short)(n - 1); j > i; j--) {
        s1 += coins[j];
      }
      for (short j = (short)(i - 1); j >= 0; j--) {
        s2 += coins[j];
      }
      if (s1 > s2) {
        break;
      }
      i--;
    } while (i >= 0);
    min_coins = (short)(n - i);
    System.out.print(min_coins);
  }
}
```