# Author: José Rodolfo (jric2002)
import math
t = int(input())
while (t):
  w, h, n = list(map(int, input().split(" ")))
  x = 0
  while ((w % 2) == 0):
    w = w / 2
    x += 1
  while ((h % 2) == 0):
    h = h / 2
    x += 1
  if (math.pow(2, x) >= n):
    print("YES")
  else:
    print("NO")
  t -= 1