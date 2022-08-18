# Author: José Rodolfo (jric2002)
n = int(input())
c = [int(x) for x in input().split(" ")]
c.sort()
for a in c:
  print(a, end=' ')