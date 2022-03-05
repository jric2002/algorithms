# Author: José Rodolfo (jric2002)
k, r = list(map(int, input().split(" ")))
n = 1
while (True):
  d = ((n * k) % 10)
  if ((d == r) or (d == 0)):
    break
  n += 1
print(n)