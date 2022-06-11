# Author: José Rodolfo (jric2002)
t = int(input())
for i in range(0, t):
  n = str(input())
  c = []
  k = len(n) - 1
  j = 0
  while ((j < len(n)) and (k >= 0)):
    d = int(n[k])
    o = d * pow(10, j)
    if (o != 0):
      c.append(o)
    k -= 1
    j += 1
  print(len(c))
  print(" ".join(list(map(str, c))))