# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  k = int(input())
  i = 1
  x = 0
  while (i <= k):
    x += 1
    if ((x % 3) != 0):
      if ((x % 10) != 3):
        i += 1
  print(x)
  t -= 1