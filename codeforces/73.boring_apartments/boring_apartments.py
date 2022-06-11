# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  x = int(input())
  n = len(str(x))
  p = int(((n * (n + 1)) / 2) + (10 * ((x % 10) - 1)))
  print(p)
  t -= 1