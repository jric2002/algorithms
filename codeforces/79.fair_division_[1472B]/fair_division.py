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