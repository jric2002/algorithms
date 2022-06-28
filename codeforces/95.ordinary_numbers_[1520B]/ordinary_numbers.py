# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  amount = 0
  for i in range(1, 10):
    ordinary_number = i
    while (ordinary_number <= n):
      amount += 1
      ordinary_number = (10 * ordinary_number) + i
  print(amount)
  t -= 1