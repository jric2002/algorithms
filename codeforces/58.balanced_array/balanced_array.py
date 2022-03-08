# Author: José Rodolfo (jric2002)
t = int(input())
for i in range(0, t):
  n = int(input())
  a = []
  if ((n % 4) == 0):
    j = 1
    while (j <= (n - 2)):
      a.append(j)
      j += 1
    a.append(j + 1)
    a.append(j + int(n / 2))
    print("YES")
    for k in range(1, (n - 2), 2):
      print(a[k], end=" ")
    print(a[n - 2], end=" ")
    for k in range(0, (n - 3), 2):
      print(a[k], end=" ")
    print(a[n - 1])
  else:
    print("NO")