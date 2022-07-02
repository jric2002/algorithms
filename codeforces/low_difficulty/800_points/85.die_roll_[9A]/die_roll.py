# Author: José Rodolfo (jric2002)
y, w = list(map(int, input().split(" ")))
d = 6
n = d - max(y, w) + 1
i = 2
while (i <= n):
  if ((n % i) == 0 and (d % i) == 0):
    n = int(n / i)
    d = int(d / i)
  else:
    i += 1
print(n, d, sep="/")