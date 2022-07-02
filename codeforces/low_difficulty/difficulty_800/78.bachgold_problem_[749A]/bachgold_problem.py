# Author: José Rodolfo (jric2002)
n = int(input())
if ((n % 2) == 0):
  amount_two = int(n / 2)
  print(amount_two)
  for i in range(0, amount_two):
    print(2, end=" ")
  print(end="\n")
else:
  amount_two = int((n - 3) / 2)
  print(amount_two + 1)
  for i in range(0, amount_two):
    print(2, end=" ")
  print(3, end="\n")