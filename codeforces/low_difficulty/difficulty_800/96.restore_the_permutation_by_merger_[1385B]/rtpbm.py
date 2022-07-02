# Author: José Rodolfo (jric2002)
t = int(input())
while (t):
  n = int(input())
  a = list(map(int, input().split(" ")))
  p = list()
  while (bool(len(a))):
    p.append(a[0])
    a.pop(a.index(a[0], 1))
    a.pop(0)
  for e in p:
    print(e, end=" ")
  print(end="\n")
  t -= 1