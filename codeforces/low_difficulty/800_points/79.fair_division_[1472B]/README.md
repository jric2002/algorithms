# Fair Division
**Problem code**: 1472B  
**Tags**: dp, greedy, math  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Alice and Bob received `n` candies from their parents. `Each candy weighs either 1 gram or 2 grams`. Now they want to divide all candies among themselves fairly so that the total weight of Alice's candies is equal to the total weight of Bob's candies.

Check if they can do that.

Note that candies `are not allowed to be cut in half`.

## Input
The first line contains one integer **t (1 ≤ t ≤ 10<sup>4</sup>)** — the number of test cases. Then `t` test cases follow.

The first line of each test case contains an integer `n (1 ≤ n ≤ 100)` — the number of candies that Alice and Bob received.

The next line contains `n` integers `a1, a2, …, an` — the weights of the candies. The weight of each candy is either `1` or `2`.

It is guaranteed that the sum of `n` over all test cases does not exceed **10<sup>5</sup>**.

## Output
For each test case, output on a separate line:

* "`YES`", if all candies can be divided into two sets with the same weight;
* "`NO`" otherwise.

You can output "`YES`" and "`NO`" in any case (for example, the strings `yEs`, `yes`, `Yes` and `YES` will be recognized as positive).

## Examples
| input |
| :--- |
| 5 |
| 2 |
| 1 1 |
| 2 |
| 1 2 |
| 4 |
| 1 2 1 2 |
| 3 |
| 2 2 2 |
| 3 |
| 2 1 2 |

| output |
| :--- |
| YES |
| NO |
| YES |
| NO |
| NO |

## Note
In the first test case, Alice and Bob can each take one candy, then both will have a total weight of 1.

In the second test case, any division will be unfair.

In the third test case, both Alice and Bob can take two candies, one of weight 1 and one of weight 2.

In the fourth test case, it is impossible to divide three identical candies between two people.

In the fifth test case, any division will also be unfair.

## Solution
The solution in **C++**:
```cpp
#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int t, n, a, alice_candy_weight, bob_candy_weight, amount_candies_1gram, amount_candies_2gram;
  cin >> t;
  while (t--) {
    cin >> n;
    alice_candy_weight = bob_candy_weight = 0;
    amount_candies_1gram = amount_candies_2gram = 0;
    for (unsigned short int i = 0; i < n; i++) {
      cin >> a;
      if (a == 1) {
        amount_candies_1gram += 1;
      }
      else {
        amount_candies_2gram += 1;
      }
    }
    while (amount_candies_2gram > 0) {
      if (alice_candy_weight < bob_candy_weight) {
        alice_candy_weight += 2;
      }
      else {
        bob_candy_weight += 2;
      }
      amount_candies_2gram -= 1;
    }
    while (amount_candies_1gram > 0) {
      if (alice_candy_weight < bob_candy_weight) {
        alice_candy_weight += 1;
      }
      else {
        bob_candy_weight += 1;
      }
      amount_candies_1gram -= 1;
    }
    if (alice_candy_weight == bob_candy_weight) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
```

The solution in **Python 3**:
```python
# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  a = list(map(int, input().split(" ")))
  alice_candy_weight = bob_candy_weight = 0
  amount_candies_1gram = amount_candies_2gram = 0
  for i in range(0, n):
    if (a[i] == 1):
      amount_candies_1gram += 1
    else:
      amount_candies_2gram += 1
  while (amount_candies_2gram > 0):
    if (alice_candy_weight < bob_candy_weight):
      alice_candy_weight += 2
    else:
      bob_candy_weight += 2
    amount_candies_2gram -= 1
  while (amount_candies_1gram > 0):
    if (alice_candy_weight < bob_candy_weight):
      alice_candy_weight += 1
    else:
      bob_candy_weight += 1
    amount_candies_1gram -= 1
  if (alice_candy_weight == bob_candy_weight):
    print("YES")
  else:
    print("NO")
  t -= 1
```