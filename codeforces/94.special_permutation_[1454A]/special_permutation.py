# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  print(n, end=" ")
  for i in range(1, n):
    print(i, end=" ")
  print(end="\n")
  t -= 1