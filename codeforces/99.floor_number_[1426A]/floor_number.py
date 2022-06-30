# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n, x = map(int, input().split(" "))
  f = None
  if (n <= 2):
    f = 1
  else:
    if ((n - 2) <= x):
      f = 2
    else:
      f = 1
      i = 3
      while (i <= n):
        f += 1
        i += x
  print(f)
  t -= 1