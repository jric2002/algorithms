# Author: José Rodolfo (jric2002)
import math
t = int(input())
for i in range(0, t):
  n = int(input())
  r = 0
  if ((n % 2) == 0):
    r = int(n / 2) - 1
  else:
    r = math.ceil(n / 2) - 1
  print(r)