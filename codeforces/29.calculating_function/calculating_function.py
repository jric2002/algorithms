# Author: José Rodolfo (jric2002)
n = int(input())
if (n != 0):
  if ((n % 2) != 0):
    n += 1
    n = -1 * n
  n = int(n / 2)
else:
  n += 1
print(n)