# Author: José Rodolfo (jric2002)
import math
t = int(input())
while (t):
  a, b = list(map(int, input().split(" ")))
  major = minor = 0
  min_area = 0
  if (a > b):
    major = a
    minor = b
  else:
    major = b
    minor = a
  if ((major / 2) >= minor):
    min_area = int(math.pow(major, 2))
  else:
    min_area = int(math.pow(minor * 2, 2))
  print(min_area)
  t -= 1