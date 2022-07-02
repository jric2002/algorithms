# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  min_mov = 0
  amount_zero = 0
  amount_one = 0
  #a = [int(e) for e in input().split(" ")]
  a = list(map(int, input().split(" ")))
  for i in range(0, n):
    if ((a[i] % 2) != (i % 2)):
      if ((a[i] % 2) == 0):
        amount_zero += 1
      else:
        amount_one += 1
  if (amount_zero != amount_one):
    min_mov = -1
  else:
    min_mov = amount_one
  print(min_mov)
  t -=1