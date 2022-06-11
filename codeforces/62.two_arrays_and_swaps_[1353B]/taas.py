# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n, k = list(map(int, input().split(" ")))
  a = list(map(int, input().split(" ")))
  b = list(map(int, input().split(" ")))
  a.sort()
  b.sort()
  i = 0
  j = (n - 1)
  while ((i < k) and (a[i] < b[j])):
    number = a[i]
    a[i] = b[j]
    b[j] = number
    i += 1
    j -= 1
  max_sum = 0
  for i in range(0, n):
    max_sum += a[i]
  print(max_sum)
  t -= 1