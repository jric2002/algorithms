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