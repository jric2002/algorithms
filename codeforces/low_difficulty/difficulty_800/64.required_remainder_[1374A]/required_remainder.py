# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  x, y, n = list(map(int, input().split(" ")))
  c = int(n / x)
  while (True):
    k = (x * c) + y
    if (k <= n):
      break
    c -= 1
  print(k)
  t -= 1