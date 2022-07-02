# Author: José Rodolfo (jric2002)
n = int(input())
a = list(map(int, input().split(" ")))
total_welfare = 0
max_welfare = 0
for i in range(0, n):
  if (a[i] > max_welfare):
    max_welfare = a[i]
  total_welfare += a[i]
s = (n * max_welfare) - total_welfare
print(s)