# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  a = list(map(int, input().split(" ")))
  major = minor = a[0]
  for i in range(1, n):
    if (major < a[i]):
      major = a[i]
    if (minor > a[i]):
      minor = a[i]
  print(major - minor)
  t -= 1