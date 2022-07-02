# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  c1 = c2 = 0
  if ((n % 3) == 0):
    c1 = int(n / 3)
    c2 = c1
  elif (((n + 2) % 3) == 0):
    c1 = int((n + 2) / 3)
    c2 = c1 - 1
  else:
    c2 = int((n + 1) / 3)
    c1 = c2 - 1
  print(c1, c2, sep=" ")
  t -= 1