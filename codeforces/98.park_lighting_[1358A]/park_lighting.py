# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n, m = map(int, input().split(" "))
  l = n * m
  if ((l % 2) != 0):
    l = int((l + 1) / 2)
  else:
    l = int(l / 2)
  print(l)
  t -= 1