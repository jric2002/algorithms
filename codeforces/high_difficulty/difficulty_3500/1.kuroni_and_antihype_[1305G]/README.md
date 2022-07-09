# Kuroni and Antihype
**Problem code**: 1305G  
**Tags**: bitmasks, brute force, dp, dsu, graphs  
**Time limit per test**: 3 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Kuroni isn't good at economics. So he decided to found a new financial pyramid called `Antihype`. It has the following rules:

1. You can join the pyramid for free and get `0` coins.
2. If you are already a member of Antihype, you can invite your friend who is currently not a member of Antihype, and get a number of coins equal to your age (for each friend you invite).

`n` people have heard about Antihype recently, the `i-th` person's age is `ai`. Some of them are friends, but friendship is a weird thing now: the `i-th` person is a friend of the `j-th` person `if and only if ai AND aj = 0`, where `AND` denotes the [bitwise AND operation](https://en.wikipedia.org/wiki/Bitwise_operation#AND).

Nobody among the `n` people is a member of Antihype at the moment. They want to cooperate to join and invite each other to Antihype in a way that maximizes their combined gainings. Could you help them?

## Input
The first line contains a single integer **n (1 ≤ n ≤ 2 * 10<sup>5</sup>)**  — the number of people.

The second line contains `n` integers `a1 , a2, …, an` **(0 ≤ ai ≤ 2 * 10<sup>5</sup>)**  — the ages of the people.

## Output
Output exactly one integer  — the maximum possible combined gainings of all `n` people.

## Examples
| input |
| :--- |
| 3 |
| 1 2 3 |

| output |
| :--- |
| 2 |

## Note
Only the first and second persons are friends. The second can join Antihype and invite the first one, getting `2` for it.

## Solution
The solution in **C++**:
```cpp
```

The solution in **Python 3**:
```python
```