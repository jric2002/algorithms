# Author: José Rodolfo (jric2002)
n = int(input())
a = 0
for l in range(1, int(n / 2) + 1):
  if (((n - l) % l) == 0):
    a += 1
print(a)