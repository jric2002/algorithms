# Author: José Rodolfo (jric2002)
n = int(input())
h = 0
i = 1
while (n >= 0):
  n = n - int((i * (i + 1)) / 2)
  if (n >= 0):
    h += 1
  i += 1
print(h)