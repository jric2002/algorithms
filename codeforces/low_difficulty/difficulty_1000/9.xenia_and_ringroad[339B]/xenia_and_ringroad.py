# Author: José Rodolfo (jric2002)
n, m = map(int, input().split(" "))
a = [int(x) for x in input().split(" ")]
movs = a[0] - 1
for i in range(1, m):
  if (a[i - 1] <= a[i]):
    movs += (a[i] - a[i - 1])
  else:
    movs += ((n + a[i]) - a[i - 1])
print(movs)